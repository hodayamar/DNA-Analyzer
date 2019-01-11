#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATEDDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATEDDNA_H

#include <cstring>
#include "Idna.h"

typedef sharedPtr<Idna> IDNAp;

class concatedDna : public Idna
{

public:

    concatedDna(IDNAp, IDNAp, std::string);
    ~concatedDna(){};

    unsigned long getLength()const;
    Nucleotide operator[](size_t)const;
    int getIdSeq()const;
    std::string getNameSeq()const;


private:

    IDNAp m_firstDna;
    IDNAp m_secondDna;
    unsigned long firstLen;
    unsigned long secondLen;
    void init_sequence(const char* const);
    void setToDefualtName();
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CONCATEDDNA_H
