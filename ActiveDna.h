#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H

#include <iostream>
#include <map>
#include "Idna.h"
#include "sharedPtr.h"



typedef sharedPtr<Idna> IDNAp;

class activeDna
{
public:

//    activeDna(){};
//    ~activeDna();

    void addDnaSeq(int idIdentfier, char * nameIdentfier, IDNAp seq);

    inline void addDnaSeqById(int identfier, IDNAp seq);
    inline void addDnaSeqByName(char * nameIdentfier, IDNAp seq);

    inline IDNAp getDnaSeqById(int identfier);
    inline IDNAp getDnaSeqByName(char* identfier);

    inline bool deleteDnaSeq(char* identfier);

private:

    std::map<int, IDNAp> seqDnaById;
    std::map<char *, IDNAp> seqDnaByName;

    std::map<char *, IDNAp>::iterator seqByName;
    std::map<int, IDNAp>::iterator seqById;
};

void activeDna::addDnaSeqById(int idIdentfier, IDNAp seq)
{
    seqDnaById.insert( std::pair<int, IDNAp>(seq->getIdSeq(), seq) );
}

void activeDna::addDnaSeqByName(char * nameIdentfier, IDNAp seq)
{
    seqDnaByName.insert( std::pair<char *, IDNAp>(nameIdentfier, seq) );
}


/////CHECK IF EMPTY
IDNAp activeDna::getDnaSeqById(int identfier)
{

    std::cout <<  "activeDna ------ identfier: " << identfier << std::endl;
    IDNAp tmp = seqDnaById.find(identfier)->second;

    std::cout <<  "activeDna ------ tmp: " << tmp->getLength() << std::endl;

    return tmp;
}

IDNAp activeDna::getDnaSeqByName(char* identfier)
{
    std::cout <<  "activeDna ------ identfier: " << identfier << std::endl;
    IDNAp tmp = seqDnaByName.find(identfier)->second;

    std::cout <<  "activeDna ------ tmp: " << tmp->getLength() << std::endl;

    return tmp;
}



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
