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
    seqDnaById.insert( std::pair<int, IDNAp>(idIdentfier, seq) );
}

void activeDna::addDnaSeqByName(char * nameIdentfier, IDNAp seq)
{
    seqDnaByName.insert( std::pair<char *, IDNAp>(nameIdentfier, seq) );
}



IDNAp activeDna::getDnaSeqById(int identfier)
{
    return seqDnaById.find(identfier)->second;
}

IDNAp activeDna::getDnaSeqByName(char* identfier)
{
    return seqDnaByName.find(identfier)->second;
}



#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_ACTIVEDNA_H
