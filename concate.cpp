#include "concate.h"


concate::~concate()
{
    std::cout << "im in pair dtor" << std::endl;
}

bool numOfElement(int argc)
{
    if(argc < 2 || argc > 3)
    {
        std::cout << "Wrong number of argument" << std::endl;
        return true;
    }

    return false;
}

bool wrongIdentifier(char * identifier)
{
    if ( (identifier[0] != '@') & (identifier[0] != '#') )
    {
        std::cout << "In order to find a seq identifier is needed" << std::endl;
        return true;
    }

    return false;
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


void concate::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl)
{
    std::string name;
    char * identifier;
    IDNAp dna;

    if( WrongNumOfElement ( argc ) )
        return;

    identifier = argv[1];

    if ( WrongIdentifier ( identifier ) )
        return;;

    dna = getSeq(identifier, m_memoryCtrl);

    switch (argc)
    {
        case 1:
        {

            name = "";
            break;
        }
        case 2:
        {
            name = argv[2];;
            break;
        }
    }

    //TODO - if def name is needed. -- need to be done!
    IDNAp pairSeq(new pairDna (dna, name));
    m_memoryCtrl.addDnaSeq(pairSeq->getIdSeq(), pairSeq->getNameSeq(), pairSeq );