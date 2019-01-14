#include "commandHelper.h"


bool commandHelper::wrongNumOfElements(int argc, int minNumOfElements, int maxNumOfElements)const
{
    if(argc < minNumOfElements || argc > maxNumOfElements)
    {
        std::cout << "Wrong number of argument" << std::endl;
        return true;
    }

    return false;
}


bool commandHelper::wrongIdentifier(char * identifier)const
{
    if ( (identifier[0] != '@') & (identifier[0] != '#') )
    {
        std::cout << "In order to find a seq identifier is needed" << std::endl;
        return true;
    }

    return false;
}

IDNAp commandHelper::getSeq(char * args, memoryCtrl & m_memoryCtrl)const
{
    IDNAp dna;

    if(args[0] == '@')

        dna = m_memoryCtrl.getDnaSeq(-1, ++args);

    else
    {
        int dnaId;
        dnaId = (atoi(++args));
        dna = m_memoryCtrl.getDnaSeq(dnaId, "");
    }

    return dna;
}

