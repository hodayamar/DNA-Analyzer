#include "ActiveDna.h"


void activeDna::addDnaSeq(int idIdentfier, char * nameIdentfier, IDNAp seq)
{

    addDnaSeqById(idIdentfier, seq);
    addDnaSeqByName(nameIdentfier, seq);

}