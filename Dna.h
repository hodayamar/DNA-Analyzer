#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H

#include <cstring>
#include "Idna.h"

class DnaSequence : public Idna
{

public:

    explicit DnaSequence(const char* const char_sequence);
    ~DnaSequence();

    int getLength()const;
    Nucleotide operator[](int)const;

private:

    Nucleotide* sequence;
    unsigned long len;
//    DnaSequence(const DnaSequence&, int, int);
    void init_sequence(const char* const);

};



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H
