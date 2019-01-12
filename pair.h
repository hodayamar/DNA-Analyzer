#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H


#include "commandHelper.h"
#include "pairDna.h"

class pair : public commandHelper
{
public:

    pair ();
    ~pair ();
    void run(int argc, char ** argv, memoryCtrl &);

private:

    std::string name;
    char * identifier;
    IDNAp dna;

    void setIdentifier(char **);


};



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIR_H
