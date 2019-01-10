#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H


#include "Icommand.h"
#include "pairDna.h"

class pair : public Icommand
{
public:

    ~pair ();
    void run(int argc, char ** argv, memoryCtrl &);
};



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H
