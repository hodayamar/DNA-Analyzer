#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_LOAD_H

#include <iostream>
#include "../../Model/ModelTools/dnaReader.h"
#include "../../Model/Decorators/Idna.h"
#include "../ControllerTools/commandHelper.h"

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
