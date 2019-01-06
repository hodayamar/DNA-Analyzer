#include "delete.h"

deleteSeq::~deleteSeq()
{
    std::cout<<"im in deleteSeq dtor\n";
}

void deleteSeq::run(int argc, char **argv, memoryCtrl & m_memoryCtrl)
{
    std::cout<<"--- im in deleteSeq run ---- \n";

    if(argc < 1)
        std::cout<<"In order to Save we need an identifier: Id/Name  \n";

    else
    {
        if((argv[1][0] != '@') && (argv[1][0] != '#'))
            std::cout<<"Id must start with # , Name must start with @  \n";

        else
        {
            char * tmp = argv[1];
            std::string fileName;

            if(argv[1][0] == '@')
                m_memoryCtrl.delDnaSeq(-1, ++tmp);

            else
            {
                int dnaId;
                dnaId = (atoi(++tmp));
                m_memoryCtrl.delDnaSeq(dnaId, "");
            }
        }
    }
}