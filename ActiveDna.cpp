#include "ActiveDna.h"


void activeDna::addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq)
{
    std::cout << "activeDna::addDnaSeq ---- idIdentfier = " << nameIdentfier << std::endl;

    addDnaSeqById(idIdentfier, seq);
    addDnaSeqByName(nameIdentfier, seq);

}

void printOneSeq(IDNAp printedDna)
{
    int size = printedDna->getLength();
    std::cout << "[" << printedDna->getIdSeq() << "] " << printedDna->getNameSeq() << ": ";
    for(int i = 0; i<size; ++i)
    {
        std::cout << (*printedDna)[i];
    }
    std::cout << std::endl;
}


void activeDna::showlist()
{
    for (seqByName = seqDnaByName.begin(); seqByName != seqDnaByName.end(); ++seqByName)
        printOneSeq(seqByName->second);
}
