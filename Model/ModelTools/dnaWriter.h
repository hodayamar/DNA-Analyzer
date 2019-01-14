#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAWRITER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAWRITER_H

#include <string>
#include <iostream>
#include <fstream>
#include "../Decorators/Idna.h"
#include "sharedPtr.h"

typedef sharedPtr<Idna> IDnaPtr;

class DnaWriter
{
public:

    DnaWriter(std::string file_name, IDnaPtr dna);
    void write();

private:

    IDnaPtr m_dna;
    std::ofstream m_write;
    std::string m_filename;

};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAWRITER_H
