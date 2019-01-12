#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATE_H

#include "Icommand.h"
#include "concatedDna.h"

class concate : public Icommand
{
public:

    ~concate ();
    void run(int argc, char ** argv, memoryCtrl &);
};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATE_H
