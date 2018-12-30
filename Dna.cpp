#include "Dna.h"

DnaSequence::DnaSequence(const char* const C_sequence)
{
    sequence = NULL;

    try {

        init_sequence(C_sequence);
    }
    catch (std::invalid_argument ) {

        throw std::invalid_argument("invalid_argument");
    }
}


void DnaSequence::init_sequence(const char* const char_sequence)
{
    int len_sequence = strlen(char_sequence);
    Nucleotide* sequence_arr = new Nucleotide[len_sequence * sizeof(Nucleotide)];

    try
    {

        if (len_sequence % 3 != 0 || len_sequence == 0)
            throw std::invalid_argument("invalid length of sequence");

        for (int i = 0; i < len_sequence; ++i) {
            sequence_arr[i] = Nucleotide(char_sequence[i]);
        }

        delete[] sequence;
        sequence = new Nucleotide[len_sequence * sizeof(Nucleotide)];
        sequence = sequence_arr;
        len = len_sequence;

    }
    catch (std::invalid_argument e)
    {

        delete[] sequence_arr;
        throw e;
    }
}

int DnaSequence::getLength()const
{
    return len;
}


//Nucleotide operator[](int)const;

Nucleotide DnaSequence::operator[](int index)const
{

    return sequence[index];
}

DnaSequence::~DnaSequence()
{
    delete[] sequence;
}
