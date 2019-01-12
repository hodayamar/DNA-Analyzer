#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H

#include "ActiveDna.h"

class memoryCtrl
{
public:

    void addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq);
    void delDnaSeq(int idIdentfier, std::string nameIdentfier);
    IDNAp getDnaSeq(int idIdentfier, std::string nameIdentfier);
    bool nameIsExist(char*);
    void showlist();

private:

    activeDna m_activeDna;
};

inline bool memoryCtrl::nameIsExist(char* key)
{
    return m_activeDna.nameIsExist(key);
}

inline void memoryCtrl::showlist()
{
    m_activeDna.showlist();
}

inline void memoryCtrl::delDnaSeq(int idIdentfier, std::string nameIdentfier)
{
    m_activeDna.delDnaSeq(idIdentfier, nameIdentfier);
}

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
