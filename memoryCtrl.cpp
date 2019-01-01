#include "MemoryCtrl.h"

void memoryCtrl::addDnaSeq(int idIdentfier, char * nameIdentfier, IDNAp seq)
{
    m_activeDna.addDnaSeq(idIdentfier, nameIdentfier, seq);
}

IDNAp memoryCtrl::getDnaSeq(int idIdentfier, char * nameIdentfier)
{
    IDNAp temp;
    if(idIdentfier != -1)
    {
        std::cout << "idIdentfier = " << idIdentfier << std::endl;
        temp = m_activeDna.getDnaSeqById(idIdentfier);
    }
    else if(nameIdentfier){

        std::cout << "nameIdentfier = " << nameIdentfier << std::endl;
        temp = m_activeDna.getDnaSeqByName(nameIdentfier);

    }

    return temp;
}