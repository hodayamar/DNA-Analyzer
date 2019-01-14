#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SLICEDDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SLICEDDNA_H

#include "dnaHelper.h"

class slicedDna : public dnaHelper
{
public:

    slicedDna( IDNAp, size_t, size_t, std::string );
    ~slicedDna(){};

    unsigned long getLength()const;
    Nucleotide operator[]( size_t )const;


private:

    IDNAp m_dna;
    size_t startSeq;
    size_t endSeq;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SLICEDDNA_H
