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


IDNAp con_getSeq(char * args, memoryCtrl & m_memoryCtrl)
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


void concate::run(int argc, char ** argv, memoryCtrl & m_memoryCtrl) {
    std::string name;
    char *firstIdentifier;
    char *secondIdentifier;
    IDNAp firstDna;
    IDNAp secondDna;

    if (numOfElement(argc))
        return;

    firstIdentifier = argv[1];
    secondIdentifier = argv[2];

    if ( wrongIdentifier ( firstIdentifier ) | wrongIdentifier ( secondIdentifier ) )
        return;;

    firstDna = con_getSeq(firstIdentifier, m_memoryCtrl);
    secondDna = con_getSeq(secondIdentifier, m_memoryCtrl);

    switch (argc) {

        case 2:
        {

            name = "";
            break;
        }
        case 3:
        {
            name = argv[3];
                break;
        }
    }
    //TODO - if def name is needed. -- need to be done!
    IDNAp concatedSeq(new concatedDna( firstDna, secondDna, name ) );
    m_memoryCtrl.addDnaSeq(concatedSeq->getIdSeq(), concatedSeq->getNameSeq(), concatedSeq);
}