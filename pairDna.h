#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H

#include "dnaHelper.h"

class pairDna : public dnaHelper
{
public:

    pairDna(IDNAp, std::string);
    ~pairDna(){};

    unsigned long getLength()const;
    Nucleotide operator[](size_t)const;


private:

    IDNAp m_dna;

    void setToDefualtName();
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H
