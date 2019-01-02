#include "Print.h"

Print::~Print()
{
    std::cout << "im in Print dtor!!!" << std::endl;
}

void Print::run(int argc, char **argv, memoryCtrl & memctrl)
{
//    std::cout << "im dumb!!!" << std::endl;
//
//    IDNAp printedDna = memctrl.getDnaSeq(atoi(argv[1]), argv[2]);
//
//    std::cout << "so dumb!!!!" << std::endl;
//
//
//    if (printedDna)
//    {
//        std::cout << "getNameSeq ---- "<< printedDna->getNameSeq() << "getIdSeq ---- "<< printedDna->getIdSeq() << std::endl;
//        std::cout << "dumbest!!!" << std::endl;
//    }

    std::cout << "Print ---- argc =  " << argc << std::endl;
    if (argc == 2)
    {
        IDNAp newDna(new DnaSequence (argv[1], argv[2]));
        memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
        std::cout << "New::run ---- nameIdentfier = " << argv[1] <<  "-----" << argv[2] << std::endl;
    }
    else
    {
        IDNAp newDna(new DnaSequence (argv[1], ""));
        memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
        std::cout << "def name" << std::endl;
    }




}