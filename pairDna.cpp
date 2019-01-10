#include "pairDna.h"

void pairDna::setToDefualtName()
{
    std::stringstream ss;
    ss << defName << idSeq;
    std::string sService = ss.str();

    nameSeq = sService;

    std::cout << "nameSeq: " << nameSeq << std::endl;
}

pairDna::pairDna(IDNAp pair, std::string name)
{
    m_dna = pair;

    idSeq = autoInc++;

    std::cout << "idSeq: " << idSeq << std::endl;

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

Nucleotide pairDna::operator[](int index)const
{
    return m_dna-> operator[](index).flip();
}

int pairDna::getIdSeq()const
{
    return idSeq;
}

std::string pairDna::getNameSeq()const
{
    return nameSeq;
}



