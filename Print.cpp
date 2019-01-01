#include "Print.h"

Print::~Print()
{
    std::cout << "im in Print dtor!!!" << std::endl;
}

void Print::run(int argc, char **argv, memoryCtrl & memctrl)
{
    std::cout << "im dumb!!!" << std::endl;

    IDNAp printedDna = memctrl.getDnaSeq(atoi(argv[1]), argv[2]);

    std::cout << "so dumb!!!!" << std::endl;


//    std::cout << printedDna->getIdSeq() << printedDna->getNameSeq()<< std::endl;
    if (printedDna){

        std::cout << printedDna->getLength()<< std::endl;
        std::cout << "dumbest!!!" << std::endl;
    }



}