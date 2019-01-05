#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SAVE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SAVE_H

#include <cstdlib>
#include <cstring>
#include "Icommand.h"
#include "dnaWriter.h"

class save : public Icommand
{
public:

    ~save();
    void run(int argc, char** argv, memoryCtrl & );
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SAVE_H
