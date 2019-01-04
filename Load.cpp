#include "Load.h"

load::~load()
{
    std::cout << "im in load dtor" << std::endl;
}


bool NameIsExist(char * key, memoryCtrl & memctrl)
{
    return memctrl.nameIsExist(key);
}


void createSeqWithDefName(const char* seq, memoryCtrl & memctrl)
{
    IDNAp newDna(new DnaSequence (seq, ""));
    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
    std::cout << "def name" << std::endl;
}

void createSeq(char* seq, char* keyName, memoryCtrl & memctrl)
{

    IDNAp newDna(new DnaSequence (seq, keyName));
    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
    std::cout << "name is ---- " << keyName << std::endl;

}

void load::run(int argc, char ** argv, memoryCtrl & memctrl)
{
    std::string seqFromFile = m_dnaReader.readSeqFromFile(argv[1]);
    char * seqName = argv[2];
    if (argc == 2)
        if ( NameIsExist( seqName, memctrl ) )

            createSeqWithDefName( seqFromFile.c_str(), memctrl );
}

