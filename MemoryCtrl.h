#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H

#include "ActiveDna.h"

class memoryCtrl
{
public:

//    memoryCtrl();
//    ~memoryCtrl();

    void addDnaSeq(int idIdentfier, char * nameIdentfier, IDNAp seq);
    IDNAp getDnaSeq(int idIdentfier, char * nameIdentfier);
    bool deleteDnaSeq(char * idIdentfier, char * nameIdentfier);

private:

    activeDna m_activeDna;
};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
