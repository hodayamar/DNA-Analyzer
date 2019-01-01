#include "Print.h"

Print::~Print()
{
    std::cout << "im in Print dtor" << std::endl;
}

void NePrint::run(int argc, char ** argv, memoryCtrl & memctrl)
{
    IDNAp newDna = memctrl.getDnaSeq(1, argv[2]);

    std::cout << "im in new cmd" << std::endl;
}