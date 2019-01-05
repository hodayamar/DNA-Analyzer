#include "Save.h"

save::~save()
{
    std::cout<<"im in save dtor\n";
}

void save::run(int argc, char **argv, memoryCtrl & m_memoryCtrl)
{
    if(argc < 1)
        std::cout<<"In order to Save we need an identifier: Id/Name  \n";

    else
    {
        if((argv[1][0] != '@') && (argv[1][0] != '#'))
            std::cout<<"Id must start with # , Name must start with @  \n";

        else
        {
            char * tmp = argv[1];
            IDnaPtr idna;
            std::string fileName;

            if(argv[1][0] == '@')
                idna = m_memoryCtrl.getDnaSeq(-1, ++tmp);

            else
            {
                int dnaId;
                dnaId = (atoi(++tmp));
                idna = m_memoryCtrl.getDnaSeq(dnaId, "");
            }

            if(argc == 3)
                fileName = argv[2];

            else

                fileName = idna->getNameSeq() + ".rawdna";

            DnaWriter dnaWriter(fileName,idna);
            dnaWriter.write();
        }
    }

}