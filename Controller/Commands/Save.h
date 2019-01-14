#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SAVE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SAVE_H

#include <cstdlib>
#include <cstring>
#include "../ControllerTools/commandHelper.h"
#include "../../Model/ModelTools/dnaWriter.h"

class save : public commandHelper
{
public:

    save();
    ~save();
    void run(int argc, char** argv, memoryCtrl & );

private:

    char * identifier;
    IDNAp dnaToSave;
    std::string fileName;

    void setIdentifier(char **);
    void setFileName(int, char ** );
    void saveSeqToFile();


};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SAVE_H
