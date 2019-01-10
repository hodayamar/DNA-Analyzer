#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NUCLEOTIDE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NUCLEOTIDE_H

#include <iostream>

class Nucleotide
{
public:


    Nucleotide(char c ='A');

    bool operator == (char);
    Nucleotide* operator = (char);
    Nucleotide* operator = (Nucleotide);
    operator char()
    {
        return c_sequence;
    };
    char flip();

private:
    void check_if_valid(char c_to_check);
    char c_sequence;


};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_NUCLEOTIDE_H
