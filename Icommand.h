#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H

#include "Idna.h"
#include "MemoryCtrl.h"

class Icommand
{

public:

    virtual ~Icommand(){};
    virtual void run(int argc, char **argv) = 0;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H
