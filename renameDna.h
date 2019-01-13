#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_RENAMEDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_RENAMEDNA_H


#include "commandHelper.h"

class renameSeq : public commandHelper
{
public:

    renameSeq();
    ~renameSeq();
    void run( int argc, char** argv, memoryCtrl & );

private:

    char * identifier;
    IDNAp dna;
    std::string newName;

    void setIdentifier( char ** );
    void setNewName( char ** );
    void renameSequence( memoryCtrl & );
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_RENAMEDNA_H
