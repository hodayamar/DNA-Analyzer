#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H

#include "ActiveDna.h"

class memoryCtrl
{
public:

//    memoryCtrl();
//    ~memoryCtrl();

    void addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq);
    IDNAp getDnaSeq(int idIdentfier, std::string nameIdentfier);
    bool deleteDnaSeq(char * idIdentfier, std::string nameIdentfier);
    inline bool nameIsExist(char*);
    inline void showlist();

private:

    activeDna m_activeDna;
};

bool memoryCtrl::nameIsExist(char* key)
{
    return m_activeDna.nameIsExist(key);
}
void memoryCtrl::showlist()
{
    m_activeDna.showlist();
}

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
