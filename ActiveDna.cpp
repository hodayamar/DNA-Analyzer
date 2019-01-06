#include "ActiveDna.h"


void activeDna::addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq)
{
    std::cout << "activeDna::addDnaSeq ---- idIdentfier = " << nameIdentfier << std::endl;

    addDnaSeqById(idIdentfier, seq);
    addDnaSeqByName(nameIdentfier, seq);

}

void printOneSeq(IDNAp printedDna)
{
    int size = printedDna->getLength();
    std::cout << "[" << printedDna->getIdSeq() << "] " << printedDna->getNameSeq() << ": ";
    for(int i = 0; i<size; ++i)
    {
        std::cout << (*printedDna)[i];
    }
    std::cout << std::endl;
}

void activeDna::removeSeqByIdFromDB(int identifier)
{
    std::string keyName = seqById->second->getNameSeq();
    seqDnaByName.erase( keyName );
    seqDnaById.erase( seqById );
}

void activeDna::removeSeqByNameFromDB(std::string identifier)
{
    int keyId = seqByName->second->getIdSeq();
    seqDnaById.erase( keyId );
    seqDnaByName.erase( seqByName );
}


void activeDna::showlist()
{
    seqByName = seqDnaByName.begin();
    if(seqByName == seqDnaByName.end())
    {
        std::cout << "The list is empty" << std::endl;
    }
    for ( ; seqByName != seqDnaByName.end(); ++seqByName)
        printOneSeq(seqByName->second);
}

void activeDna::delDnaSeq(int idIdentfier, std::string nameIdentfier)
{
    if (idIdentfier != -1)
    {

        seqById = seqDnaById.find(idIdentfier);

        if( seqById != seqDnaById.end() )
        {
            removeSeqByIdFromDB( seqById->second->getIdSeq() );
        }

        else puts( "not found" ) ;
    }
    else
    {
        seqByName = seqDnaByName.find(nameIdentfier);

        if( seqByName != seqDnaByName.end() )
        {
            removeSeqByNameFromDB( seqByName->second->getNameSeq() );
        }

        else puts( "not found" ) ;
    }
}
