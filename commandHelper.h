#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDHELPER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDHELPER_H

#include <cstdlib>
#include <string>
#include "sharedPtr.h"
#include "MemoryCtrl.h"
#include "Dna.h"
#include "Icommand.h"

typedef sharedPtr<Idna> IDNAp;

class commandHelper : public Icommand
{
public:

    bool numOfElements( int, int, int );
    bool wrongIdentifier( char * );
    IDNAp getSeq( char *, memoryCtrl & );

//    void printSeq()const;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDHELPER_H
