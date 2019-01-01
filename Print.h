#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PRINT_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PRINT_H

#include "Icommand.h"


class Print : public Icommand
{
public:

    ~Print();


    void run(int, char **, memoryCtrl & );


};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PRINT_H
