#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAREADER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAREADER_H

#include <iostream>
#include <fstream>

class dneReader
{
public:

    std::string readSeqFromFile(std::string fileName);
    bool fileIsExist(const char * fileName);

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAREADER_H
