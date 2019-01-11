#include "pair.h"

pair::~pair()
{
    std::cout << "im in pair dtor" << std::endl;
}

IDNAp getSeq(char * args, memoryCtrl & m_memoryCtrl)
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


void pair::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl)
{


    IDNAp dna;
    dna = getSeq(argv[1], m_memoryCtrl);

    //TODO - if def name is needed. -- need to be done!
    IDNAp pairSeq(new pairDna (dna, ""));

    m_memoryCtrl.addDnaSeq(pairSeq->getIdSeq(), pairSeq->getNameSeq(), pairSeq );

}