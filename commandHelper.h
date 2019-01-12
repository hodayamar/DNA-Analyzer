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

protected:

    bool wrongNumOfElements( int, int, int )const ;
    bool wrongIdentifier( char * )const;
    IDNAp getSeq( char *, memoryCtrl & )const;
    virtual void setIdentifier(char **){};
    virtual void setNameSeq(int, char ** ) {};

    int minNumOfElements;
    int maxNumOfElements;


//    void printSeq()const;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDHELPER_H
