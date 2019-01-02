#include "ActiveDna.h"


void activeDna::addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq)
{
    std::cout << "activeDna::addDnaSeq ---- idIdentfier = " << nameIdentfier << std::endl;

    addDnaSeqById(idIdentfier, seq);
    addDnaSeqByName(nameIdentfier, seq);

}