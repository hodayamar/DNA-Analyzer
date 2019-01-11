#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H

#include "Idna.h"

typedef sharedPtr<Idna> IDNAp;

class pairDna : public Idna
{
public:

    pairDna(IDNAp, std::string);
    ~pairDna(){};

    unsigned long getLength()const;
    Nucleotide operator[](size_t)const;

    int getIdSeq()const;
    std::string getNameSeq()const;

private:

    IDNAp m_dna;

    void setToDefualtName();
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PAIRDNA_H
