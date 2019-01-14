#include "len.h"

length::length()
{
    minNumOfElements = 1;
    maxNumOfElements = 1;
}

length::~length()
{
    std::cout<<"im in length dtor\n";
}

void length::setIdentifier( char ** argc )
{
    identifier = argc[1];
}

void length::printLengthOfDna(memoryCtrl & m_memctrl)
{
    dna = getSeq(identifier, m_memctrl);

    std::cout << "Length is: " << dna->getLength() << std::endl;
}

void length::run(int argc, char** argv, memoryCtrl & m_memctrl)
{
    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if ( wrongIdentifier ( identifier ) )
        return;

    printLengthOfDna( m_memctrl );
}
