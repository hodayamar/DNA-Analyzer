#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DELETE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DELETE_H

#include "../ControllerTools/commandHelper.h"

class deleteSeq : public commandHelper
{
public:

    deleteSeq();
    ~deleteSeq();
    void run(int argc, char ** argv, memoryCtrl &);
    static Icommand *  Create();


private:

    void setIdentifier(char **);
    char * identifier;
    void deleteSeqFromDB(memoryCtrl & );

};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DELETE_H
