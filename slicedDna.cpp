#include "slicedDna.h"


slicedDna::slicedDna(IDNAp dnaToSlice, size_t sSeq, size_t eSeq, std::string name)
{

    startSeq = sSeq;
    endSeq = eSeq;
    m_dna = dnaToSlice;

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

unsigned long slicedDna::getLength()const
{
    return endSeq - startSeq;
}

Nucleotide slicedDna::operator[](size_t index)const
{
    return m_dna-> operator[](index + startSeq);
}



