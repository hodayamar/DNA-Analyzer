#include "pairDna.h"

pairDna::pairDna(IDNAp pair, std::string name)
{

    m_dna = pair;

    idSeq = autoInc++;

    if(name.compare(""))
    {
        nameSeq = name;
    }

    else
    {
        setToDefualtName();
    }
}

unsigned long pairDna::getLength()const
{
    return m_dna->getLength();
}

Nucleotide pairDna::operator[]( size_t index )const
{
    return m_dna-> operator[]( index ).flip();
}




