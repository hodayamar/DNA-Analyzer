#include "concatedDna.h"


concatedDna::concatedDna(IDNAp first, IDNAp second, std::string name)
{
    m_firstDna = first;
    m_secondDna = second;
    firstLen = first->getLength();
    secondLen = second->getLength();
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

unsigned long concatedDna::getLength()const
{
    return firstLen + secondLen;
}

Nucleotide concatedDna::operator[](size_t index)const
{
    if ( index < firstLen)
        return m_firstDna-> operator[](index);
    else
        return m_secondDna-> operator[](index - firstLen);
}

