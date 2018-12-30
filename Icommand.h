#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H

#include "Idna.h"
#include "sharedPtr.h"
#include "MemoryCtrl.h"
#include "Dna.h"

typedef sharedPtr<Idna> IDNAp;

class Icommand
{

public:

    virtual ~Icommand(){};
    virtual void run(int argc, char **argv, memoryCtrl &) = 0;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H
