#include "Nucleotide.h"

void Nucleotide::check_if_valid(char c_to_check)
{
    if (c_to_check != 'A' && c_to_check != 'G' && c_to_check != 'T' && c_to_check != 'C')
        throw std::invalid_argument("received invalid value");
}

Nucleotide::Nucleotide(char nuc)
{
    nuc = toupper(nuc);
    try{
        check_if_valid(nuc);
        c_sequence = nuc;
    }
    catch(std::invalid_argument){

        throw std::invalid_argument("invalid_argument");
    }
}

bool Nucleotide::operator==(char other)
{
    return c_sequence == other;
}

Nucleotide* Nucleotide::operator=(char c)
{
    //add try and catc
    c_sequence = c;
    return this;
}

Nucleotide * Nucleotide::operator=(Nucleotide temp)
{
    c_sequence = temp.c_sequence ;
    return this;
}

char Nucleotide::flip()
{
    try {
        switch (c_sequence) {
            case 'A':
                return 'T';

            case 'C':
                return 'G';
            case 'G':
                return 'C';
            case 'T':
                return 'A';
            default:
                throw std::invalid_argument("invalid_argument");
        }
    }
    catch(std::invalid_argument){

         throw std::invalid_argument("invalid_argument");
    }
}