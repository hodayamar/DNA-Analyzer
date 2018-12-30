#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H

#include "ActiveDna.h"

class memoryCtrl
{
public:

    memoryCtrl();
    ~memoryCtrl();

    bool addDnaSeq(char* identfier, char*  seq);
    IDNAp getLength(char* identfier);
    bool deleteDnaSeq(char* identfier);

private:

    activeDna m_activeDna;
};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_MEMORYCTRL_H
