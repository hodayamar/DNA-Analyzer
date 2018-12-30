#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NEW_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NEW_H

#include "Icommand.h"

class New : public Icommand
{
public:

   ~New();
    void run(int argc, char ** argv, memoryCtrl &);

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NEW_H
