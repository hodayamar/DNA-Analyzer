#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LEN_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LEN_H

#include "../ControllerTools/commandHelper.h"

class length : public commandHelper
{

public:

    length();
    ~length();
    void run(int argc, char** argv, memoryCtrl & );

private:

    char * identifier;
    IDNAp dna;

    void setIdentifier(char **);
    void printLengthOfDna( memoryCtrl & );

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LEN_H
