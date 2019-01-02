#include "Print.h"

Print::~Print()
{
    std::cout << "im in Print dtor!!!" << std::endl;
}

void printSeq(IDNAp printedDna)
{
    int size = printedDna->getLength();
    std::cout << "[" << printedDna->getIdSeq() << "] " << printedDna->getNameSeq() << ": ";
    for(int i = 0; i<size; ++i)
    {
        std::cout << (*printedDna)[i];
    }
    std::cout << std::endl;
}

void Print::run(int argc, char **argv, memoryCtrl & memctrl) {

    char * tmp = argv[1];

    if (tmp[0] == '#')
    {

        IDNAp newDna = memctrl.getDnaSeq(atoi(++tmp), "");
        printSeq(newDna);
    }
    else if (tmp[0] == '@')
    {
        IDNAp newDna = memctrl.getDnaSeq(-1, ++tmp);
        printSeq(newDna);
    }
}