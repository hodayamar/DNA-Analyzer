#include "delete.h"

deleteSeq::deleteSeq()
{
   minNumOfElements = 1;
   maxNumOfElements = 2;
}

deleteSeq::~deleteSeq()
{
    std::cout<<"im in deleteSeq dtor\n";
}

void deleteSeq::setIdentifier(char ** argv)
{
    identifier = argv[1];
}

void deleteSeq::deleteSeqFromDB(memoryCtrl & m_memoryCtrl)
{
    if(identifier[0] == '@')
        m_memoryCtrl.delDnaSeq(-1, ++identifier);

    else
    {
        int dnaId;
        dnaId = (atoi(++identifier));
        m_memoryCtrl.delDnaSeq(dnaId, "");
    }
}

void deleteSeq::run(int argc, char **argv, memoryCtrl & m_memoryCtrl)
{

    if( wrongNumOfElements(argc, minNumOfElements, maxNumOfElements) )
        return;

    setIdentifier(argv);

    if (wrongIdentifier( identifier ) )
        return;

    deleteSeqFromDB( m_memoryCtrl );

}

Icommand *  deleteSeq::Create()
{
    return new deleteSeq();
}
