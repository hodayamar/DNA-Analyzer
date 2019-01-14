
#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATE_H

#include "../ControllerTools/commandHelper.h"
#include "../../Model/Decorators/duplicatedDna.h"

class duplicate : public commandHelper
{
public:

    duplicate ();
    ~duplicate ();
    void run( int argc, char ** argv, memoryCtrl & );
    static Icommand *  Create();


private:

    std::string name;
    char * identifier;
    IDNAp dna;

    void setIdentifier( char ** );
    void setNameSeq( int, char ** );
    void duplicateAndAddingSeqToDB( memoryCtrl & );

};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATE_H
