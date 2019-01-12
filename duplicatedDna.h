
#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATEDDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATEDDNA_H

#include "dnaHelper.h"

class duplicatedDna : public dnaHelper
{
public:

    duplicatedDna(IDNAp, std::string);
    ~duplicatedDna(){};

    unsigned long getLength()const;
    Nucleotide operator[](size_t)const;


private:

    IDNAp m_dna;

    void setToDefualtName();
};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DUPLICATEDDNA_H
