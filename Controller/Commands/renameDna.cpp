#include "renameDna.h"

renameSeq::renameSeq()
{
    minNumOfElements = 2;
    maxNumOfElements = 2;
}

renameSeq::~renameSeq()
{
    std::cout<<"im in renameSeq dtor\n";
}

void renameSeq::setIdentifier( char ** argv )
{
    identifier = argv[1];
}

void renameSeq::setNewName( char ** argv)
{
    newName = argv[2];
}

void renameSeq::renameSequence( memoryCtrl & m_memctrl )
{
    dna = getSeq(identifier, m_memctrl);
    dna->setNameSeq( newName );
    std::cout << "name is: " << dna->getNameSeq() << std::endl;
}

void renameSeq::run(int argc, char** argv, memoryCtrl & m_memctrl)
{
    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if ( wrongIdentifier ( identifier ) )
        return;

    setNewName( argv );

    renameSequence( m_memctrl );
}

Icommand *  renameSeq::Create()
{
    return new renameSeq();
}