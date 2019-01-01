#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H

#include "sharedPtr.h"
#include "MemoryCtrl.h"
#include "Dna.h"
#include <cstdlib> //the standard C library header
#include <string>

typedef sharedPtr<Idna> IDNAp;

class Icommand
{

public:

    virtual ~Icommand(){};
    virtual void run(int argc, char **argv, memoryCtrl &) = 0;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ICOMMAND_H
