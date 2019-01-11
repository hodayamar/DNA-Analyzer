#include "duplicate.h"


duplicate::~duplicate()
{
    std::cout << "im in duplicate dtor" << std::endl;
}

bool WrongNumOfElements(int argc)
{
    if(argc < 1 || argc > 2)
    {
        std::cout << "Wrong number of argument" << std::endl;
        return true;
    }

    return false;
}

bool WrongIdentifierSeq(char * identifier)
{
    if ( (identifier[0] != '@') & (identifier[0] != '#') )
    {
        std::cout << "In order to find a seq identifier is needed" << std::endl;
        return true;
    }

    return false;
}

IDNAp getSeqByIdentifier(char * args, memoryCtrl & m_memoryCtrl)
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


void duplicate::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl)
{
    std::string name;
    char * identifier;
    IDNAp dna;

    if( WrongNumOfElements ( argc ) )
        return;

    identifier = argv[1];

    if ( WrongIdentifierSeq ( identifier ) )
        return;;

    dna = getSeqByIdentifier(identifier, m_memoryCtrl);

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
    IDNAp dupSeq(new duplicatedDna (dna, name));
    m_memoryCtrl.addDnaSeq(dupSeq->getIdSeq(), dupSeq->getNameSeq(), dupSeq );
}