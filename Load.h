#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H


#include <fstream>
#include <iostream>
#include "Idna.h"
#include "Icommand.h"

class DNAReader : Icommand
{
public:

    ~DNAReader();

    void run(int argc, char ** argv, memoryCtrl &);

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
