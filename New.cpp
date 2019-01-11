#include "New.h"


New::~New()
{
    std::cout << "im in new dtor" << std::endl;
}

void New::createSeqWithDefName(char* seq, memoryCtrl & memctrl)
{
    IDNAp newDna(new DnaSequence (seq, ""));
    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
    std::cout << "def name" << std::endl;
}

void New::createSeq(char* seq, char* keyName, memoryCtrl & memctrl)
{

    IDNAp newDna(new DnaSequence (seq, keyName));
    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
    std::cout << "name is ---- " << keyName << std::endl;

}

void New::run(int argc, char ** argv, memoryCtrl & memctrl)
{

    if (argc == 2)
    {

        char * key = argv[2];

        if ( memctrl.nameIsExist(key))
            createSeq(argv[1], argv[2], memctrl);
        else
            createSeqWithDefName(argv[1], memctrl);

    }
    else if (argc == 1)
        createSeqWithDefName(argv[1], memctrl);

    else
        std::cout << "Wrong number of parameters" << std::endl;

}