#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H

#include "Nucleotide.h"

class  Idna
{
public:

    virtual ~Idna(){};

    virtual int getLength()const = 0;
    virtual Nucleotide operator[](int)const = 0;



protected:

    char * nameSeq;
    int idSeq;
    static int autoInc;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
