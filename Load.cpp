#include "Load.h"

DNAReader::~DNAReader()
{


}

std::string readSeqFromFile(std::string fileName)
{
    std::filebuf fb;

    fb.open(fileName.c_str(), std::ios::in);

    std::istream is(&fb);

    std::string seq((std::istreambuf_iterator<char>(is)),
                    std::istreambuf_iterator<char>());
    fb.close();

    return  seq;

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

void DNAReader::run(int argc, char ** argv, memoryCtrl & memctrl)
{
    std::string seqFromFile = readSeqFromFile(argv[1]);
    char * seqName = argv[2];
    if (argc == 2)
        if ( NameIsExist( seqName, memctrl ) )

            createSeqWithDefName( seqFromFile.c_str(), memctrl );
}

