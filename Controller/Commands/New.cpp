#include "New.h"

New::New()
{
    minNumOfElements = 1;
    maxNumOfElements = 2;
}

New::~New()
{
    std::cout << "im in new dtor" << std::endl;
}

void New::setNameSeq( int argc, char ** argv, memoryCtrl & memctrl )
{
    switch ( argc )
    {
        case 1:
        {

            name = "";
            break;
        }
        case 2:
        {
            if ( ! memctrl.nameNotExist( argv[2] ) )
                name = "";
            else
                name = argv[2];

            break;
        }
    }
}

void New::createAndAddingSeqToDB(memoryCtrl & memctrl)
{
    IDNAp newDna(new DnaSequence (seq, name));
    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
}

void New::setSeq( char ** argv )
{
    seq = argv[minNumOfElements];
}


void New::run(int argc, char ** argv, memoryCtrl & memctrl)
{

    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setNameSeq( argc, argv, memctrl );

    setSeq( argv );

    createAndAddingSeqToDB( memctrl );
}