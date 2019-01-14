#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H


#include "../ControllerTools/commandHelper.h"
#include "../../Model/Decorators/pairDna.h"

class pair : public commandHelper
{
public:

    pair ();
    ~pair ();
    void run( int argc, char ** argv, memoryCtrl & );
    static Icommand *  Create();


private:

    std::string name;
    char * identifier;
    IDNAp dna;

    void setIdentifier( char ** );
    void setNameSeq( int, char ** );
    void pairAndAddingSeqToDB( memoryCtrl & );



};



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H
