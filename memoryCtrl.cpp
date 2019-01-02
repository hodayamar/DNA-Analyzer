#include "MemoryCtrl.h"
#include <stdio.h>
#include <string.h>

void memoryCtrl::addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq)
{
    std::cout << "memoryCtrl::addDnaSeq ---- idIdentfier = " << nameIdentfier << std::endl;

    m_activeDna.addDnaSeq(idIdentfier, nameIdentfier, seq);
}

IDNAp memoryCtrl::getDnaSeq(int idIdentfier, std::string nameIdentfier)
{
    IDNAp temp;
    if(idIdentfier != -1)
    {
        std::cout << "idIdentfier = " << idIdentfier << std::endl;
        temp = m_activeDna.getDnaSeqById(idIdentfier);
    }
    else if(nameIdentfier.compare("")){

        std::cout << "nameIdentfier = " << nameIdentfier << std::endl;
        temp = m_activeDna.getDnaSeqByName(nameIdentfier);

    }

    return temp;
}