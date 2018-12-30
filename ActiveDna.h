#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H

#include <iostream>
#include <map>
#include "Idna.h"
#include "sharedPtr.h"

typedef struct
{
    int id;
    char * name;

} idName;

typedef sharedPtr<Idna> IDNAp;

class activeDna
{
public:

    activeDna();
    ~activeDna();

    inline bool addDnaSeqById(char* identfier, IDNAp seq);
    inline bool addDnaSeqByName(int identfier, IDNAp seq);

    inline IDNAp getDnaSeqById(char* identfier);
    inline IDNAp addDnaSeqByName(int identfier);

    inline bool deleteDnaSeqById(char* identfier);
    inline bool deleteDnaSeqByName(int identfier);

private:

    static std::map<idName, IDNAp> seqDna;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
