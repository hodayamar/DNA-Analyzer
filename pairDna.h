#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H

#include "Idna.h"

class pairDna : public Idna
{
public:

    pairDna(sharedPtr <idna>);//FIXME
    ~pairDna();

    int getLength()const;
    Nucleotide operator[](int)const;
    int getIdSeq()const;
    std::string getNameSeq()const;


private:

    Nucleotide* sequence;
    unsigned long len;
    void setToDefualtName();
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H
