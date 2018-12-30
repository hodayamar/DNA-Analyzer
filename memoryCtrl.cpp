#include "MemoryCtrl.h"

void memoryCtrl::addDnaSeq(int idIdentfier, char * nameIdentfier, IDNAp seq)
{
    m_activeDna.addDnaSeq(idIdentfier, nameIdentfier, seq);
}