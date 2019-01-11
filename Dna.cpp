#include "Dna.h"

int DnaSequence::Idna::autoInc = 0;

void DnaSequence::setToDefualtName()
{
    std::stringstream ss;
    ss << defName << idSeq;
    std::string sService = ss.str();

    nameSeq = sService;

    std::cout << "nameSeq: " << nameSeq <<std::endl;
}

DnaSequence::DnaSequence(const char* const C_sequence, std::string name)
{
    idSeq = autoInc++;
    std::cout << "idSeq: " << idSeq << std::endl;

    if(name.compare("")) {
        nameSeq = name;
    }
    else {

        setToDefualtName();
    }


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

unsigned long DnaSequence::getLength()const
{
    return len;
}

Nucleotide DnaSequence::operator[](int index)const
{
    return sequence[index];
}

DnaSequence::~DnaSequence()
{
    delete[] sequence;
}

int DnaSequence::getIdSeq()const
{
    return idSeq;
}
std::string DnaSequence::getNameSeq()const
{
    return nameSeq;
}

