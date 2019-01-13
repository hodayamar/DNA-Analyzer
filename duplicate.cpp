#include "duplicate.h"

duplicate::duplicate()
{
    minNumOfElements = 1;
    maxNumOfElements = 2;

}

duplicate::~duplicate()
{
    std::cout << "im in duplicate dtor" << std::endl;
}

void duplicate::setIdentifier( char ** argv )
{
    identifier = argv[1];
}

void duplicate::setNameSeq( int argc, char ** argv )
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
            name = argv[2];
            break;
        }
    }
}

void duplicate::duplicateAndAddingSeqToDB( memoryCtrl & m_memoryCtrl )
{

    dna = getSeq(identifier, m_memoryCtrl);

    //TODO - if def name is needed. -- need to be done!
    IDNAp dupSeq(new duplicatedDna ( dna, name ) );
    m_memoryCtrl.addDnaSeq( dupSeq->getIdSeq(), dupSeq->getNameSeq(), dupSeq );
}

void duplicate::run( int argc, char ** argv, memoryCtrl & m_memoryCtrl )
{

    if( wrongNumOfElements ( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if ( wrongIdentifier ( identifier ) )
        return;

    setNameSeq( argc, argv );

    duplicateAndAddingSeqToDB( m_memoryCtrl );
}