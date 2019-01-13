#include "pair.h"


pair::pair ()
{
    minNumOfElements = 1;
    maxNumOfElements = 2;
}

pair::~pair()
{
    std::cout << "im in pair dtor" << std::endl;
}

void pair::setIdentifier(char ** argv)
{
    identifier = argv[minNumOfElements];
}

void pair::setNameSeq(int argc, char ** argv)
{
    //TODO - NEED TO MAKE A NICE FUNCTION FOR THIS CODE
    switch (argc)
    {

        case 1:
        {
            name = "";
            break;
        }
        case 2:
        {
            name = argv[2];
            break;
        }
    }
}

void pair::pairAndAddingSeqToDB( memoryCtrl & m_memoryCtrl)
{
    dna = getSeq( identifier, m_memoryCtrl );

    //TODO - if def name is needed. -- need to be done!
    IDNAp pairSeq(new pairDna (dna, name));
    m_memoryCtrl.addDnaSeq(pairSeq->getIdSeq(), pairSeq->getNameSeq(), pairSeq );
}



void pair::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl)
{
    if( wrongNumOfElements ( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if ( wrongIdentifier ( identifier ) )
        return;;

    setNameSeq( argc, argv );

    pairAndAddingSeqToDB( m_memoryCtrl );
}