#include "New.h"


New::~New()
{
    std::cout << "im in new dtor" << std::endl;
}

void New::run(int argc, char ** argv, memoryCtrl & memctrl)
{
    IDNAp newDna(new DnaSequence (argv[1]));
    memctrl.addDnaSeq(1, argv[2], newDna );
    std::cout << "im in new cmd" << std::endl;
}