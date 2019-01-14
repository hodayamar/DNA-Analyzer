#include "Print.h"

Print::Print()
{
    minNumOfElements = 1;
    maxNumOfElements = 2;
}


Print::~Print()
{
    std::cout << "im in Print dtor!!!" << std::endl;
}

void Print::getAndPrintSeq( memoryCtrl &  memctrl )
{
    IDNAp printedDna = getSeq( identifier, memctrl );

    int size = printedDna->getLength();

    std::cout << "[" << printedDna->getIdSeq() << "] " << printedDna->getNameSeq() << ": ";

    for(int i = 0; i<size; ++i)
    {
        std::cout << (*printedDna)[i];
    }
    std::cout << std::endl;
}

void Print::setIdentifier( char ** argv)
{
    identifier = argv[minNumOfElements];
}


void Print::run( int argc, char **argv, memoryCtrl & memctrl ) {

    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if( wrongIdentifier( identifier ) )
        return;

    getAndPrintSeq( memctrl );
}