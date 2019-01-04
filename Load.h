#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H

#include <iostream>
#include "dnaReader.h"
#include "Idna.h"
#include "Icommand.h"

class load : public Icommand
{
public:

    ~load();
    void run(int argc, char ** argv, memoryCtrl &);

private:

    dneReader m_dnaReader;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
