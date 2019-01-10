#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNA_H

#include <cstring>
#include "Idna.h"
#define defName "seq"

class DnaSequence : public Idna
{

public:

    DnaSequence(const char* const char_sequence, std::string);
    ~DnaSequence();

    int getLength()const;
    Nucleotide operator[](int)const;
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
