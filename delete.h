#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DELETE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DELETE_H

#include "Icommand.h"

class deleteSeq : public Icommand
{
public:

    ~deleteSeq();
    void run(int argc, char ** argv, memoryCtrl &);
};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DELETE_H
