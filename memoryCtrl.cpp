#include "MemoryCtrl.h"

void memoryCtrl::addDnaSeq(int idIdentfier, char * nameIdentfier, IDNAp seq)
{
    m_activeDna.addDnaSeq(idIdentfier, nameIdentfier, seq);
}

IDNAp getDnaSeq(int idIdentfier = 0, char * nameIdentfier = NULL)
{
    if(idIdentfier)
        m_activeDna.getDnaSeqById(idIdentfier);

    else if(nameIdentfier)
        m_activeDna.getDnaSeqByName(nameIdentfier);


}