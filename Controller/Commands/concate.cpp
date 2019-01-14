#include "concate.h"

concate::concate()
{
    minNumOfElements = 2;
    maxNumOfElements = 3;
}

concate::~concate()
{
    std::cout << "im in pair dtor" << std::endl;
}

void concate::setIdentifier(char ** argv)
{
    firstIdentifier = argv[1];
    secondIdentifier = argv[2];
}

void concate::setNameSeq( int argc, char ** argv )
{
    switch (argc)
    {
        case 2:
        {

            name = "";
            break;
        }
        case 3:
        {
            name = argv[3];
            break;
        }
    }
}

void concate::concatAndAddingSeqToDB(memoryCtrl & m_memoryCtrl)
{
    firstDna = getSeq(firstIdentifier, m_memoryCtrl);
    secondDna = getSeq(secondIdentifier, m_memoryCtrl);

    //TODO - if def name is needed. -- need to be done!
    IDNAp concatedSeq(new concatedDna( firstDna, secondDna, name ) );
    m_memoryCtrl.addDnaSeq(concatedSeq->getIdSeq(), concatedSeq->getNameSeq(), concatedSeq);
}



void concate::run( int argc, char ** argv, memoryCtrl & m_memoryCtrl ) {



    if ( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if ( wrongIdentifier ( firstIdentifier ) | wrongIdentifier ( secondIdentifier ) )
        return;

    setNameSeq( argc, argv );

    concatAndAddingSeqToDB( m_memoryCtrl );
}

Icommand *  concate::Create()
{
    return new concate();
}