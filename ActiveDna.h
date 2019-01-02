#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H

#include <iostream>
#include <map>
#include "Idna.h"
#include "sharedPtr.h"
#include <stdio.h>
#include <string.h>



typedef sharedPtr<Idna> IDNAp;

class activeDna
{
public:

//    activeDna(){};
//    ~activeDna();

    void addDnaSeq(int idIdentfier, std::string nameIdentfier, IDNAp seq);

    inline void addDnaSeqById(int identfier, IDNAp seq);
    inline void addDnaSeqByName(std::string nameIdentfier, IDNAp seq);

    inline IDNAp getDnaSeqById(int identfier);
    inline IDNAp getDnaSeqByName(std::string identfier);

    inline bool deleteDnaSeq(std::string identfier);

    inline bool nameIsExist(char*);

private:

    std::map<int, IDNAp> seqDnaById;
    std::map<std::string, IDNAp> seqDnaByName;

    std::map<std::string, IDNAp>::iterator seqByName;
    std::map<int, IDNAp>::iterator seqById;
};

void activeDna::addDnaSeqById(int idIdentfier, IDNAp seq)
{
    seqDnaById.insert( std::pair<int, IDNAp>(seq->getIdSeq(), seq) );
}

void activeDna::addDnaSeqByName(std::string nameIdentfier, IDNAp seq)
{

    std::cout << "activeDna::addDnaSeqByName ---- nameIdentfier = " << nameIdentfier << std::endl;
    seqDnaByName.insert( std::pair<std::string, IDNAp>(nameIdentfier, seq) );
}


/////CHECK IF EMPTY
IDNAp activeDna::getDnaSeqById(int identfier)
{

    std::cout <<  "activeDna ------ identfier: " << identfier << std::endl;
    IDNAp tmp = seqDnaById.find(identfier)->second;

    return tmp;
}

IDNAp activeDna::getDnaSeqByName(std::string identfier)
{
    std::cout <<  "activeDna ------ name -- identfier: " << identfier << std::endl;
    IDNAp tmp = seqDnaByName.find(identfier)->second;
    return tmp;
}

bool activeDna::nameIsExist(char* key)
{
    return seqDnaByName.find(key) == seqDnaByName.end();
}



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
