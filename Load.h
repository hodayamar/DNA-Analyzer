#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H

#include <iostream>
#include "dnaReader.h"
#include "Idna.h"
#include "commandHelper.h"

class load : public commandHelper
{
public:

    load();
    ~load();
    void run(int argc, char ** argv, memoryCtrl &);

private:

    dneReader m_dnaReader;
    std::string name;
    std::string seqFromFile;
    IDNAp dna;

    void setNameSeq( int, char **, memoryCtrl & );
    bool fileNotExist( char ** argv );
    void createAndAddingSeqToDB( memoryCtrl & );



};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
