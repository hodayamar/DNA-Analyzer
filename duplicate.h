
#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATE_H

#include "Icommand.h"
#include "duplicatedDna.h"

class duplicate : public Icommand
{
public:

    ~duplicate ();
    void run(int argc, char ** argv, memoryCtrl &);
};



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATE_H
