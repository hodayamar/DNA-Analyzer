#include "Print.h"

Print::~Print()
{
    std::cout << "im in Print dtor!!!" << std::endl;
}

void Print::run(int argc, char **argv, memoryCtrl & memctrl) {

    char * tmp = argv[1];
    if (tmp[0] == '#')
    {

        IDNAp newDna = memctrl.getDnaSeq(atoi(++tmp), "");
        std::cout << "[ " << newDna->getIdSeq() << " ] " << newDna->getNameSeq() << std::endl;
    }
    else if (tmp[0] == '@')
    {
        IDNAp newDna = memctrl.getDnaSeq(-1, tmp);
        std::cout << "[ " << newDna->getIdSeq() << " ] " << newDna->getNameSeq() << std::endl;
    }
}