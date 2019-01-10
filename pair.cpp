#include "pair.h"

pair::~pair()
{
    std::cout << "im in pair dtor" << std::endl;
}

IDNAp getSeq(char * args, memoryCtrl & m_memoryCtrl)
{
    IDNAp idna;

    if(args[0] == '@')

        idna = m_memoryCtrl.getDnaSeq(-1, ++args);

    else
    {
        int dnaId;
        dnaId = (atoi(++args));
        idna = m_memoryCtrl.getDnaSeq(dnaId, "");
    }

    return idna;
}


void pair::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl)
{


    //get dna by id or by name -- v

    IDNAp idna;
    idna = getSeq(argv[1], m_memoryCtrl);

    //create dna pair

    //craete name - if def name is needed. -- need to be done!
    IDNAp pairSeq(new pairDna (idna, ""));

    //add dna pair to the map
    m_memoryCtrl.addDnaSeq(pairSeq->getIdSeq(), pairSeq->getNameSeq(), pairSeq );

}