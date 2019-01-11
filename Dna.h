#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H

#include <cstring>
#include "Idna.h"

class DnaSequence : public Idna
{

public:

    DnaSequence(const char* const char_sequence, std::string);
    ~DnaSequence();

    unsigned long getLength()const;
    Nucleotide operator[](size_t)const;
    int getIdSeq()const;
    std::string getNameSeq()const;


private:

    Nucleotide* sequence;
    unsigned long len;
//    DnaSequence(const DnaSequence&, int, int);
    void init_sequence(const char* const);
    void setToDefualtName();
};



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H
