#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATE_H

#include "../ControllerTools/commandHelper.h"
#include "../../Model/Decorators/concatedDna.h"

class concate : public commandHelper
{
public:

    concate ();
    ~concate ();
    void run( int argc, char ** argv, memoryCtrl & );

private:

    std::string name;
    char * firstIdentifier;
    char * secondIdentifier;
    IDNAp firstDna;
    IDNAp secondDna;

    void setIdentifier( char ** );
    void setNameSeq( int, char ** );
    void concatAndAddingSeqToDB( memoryCtrl & );
};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATE_H
