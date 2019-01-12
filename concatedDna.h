#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATEDDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATEDDNA_H

#include <cstring>
#include "dnaHelper.h"


class concatedDna : public dnaHelper
{

public:

    concatedDna(IDNAp, IDNAp, std::string);
    ~concatedDna(){};

    unsigned long getLength()const;
    Nucleotide operator[](size_t)const;



private:

    IDNAp m_firstDna;
    IDNAp m_secondDna;
    unsigned long firstLen;
    unsigned long secondLen;
    void init_sequence(const char* const);
    void setToDefualtName();
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATEDDNA_H
