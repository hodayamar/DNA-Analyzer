#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PRINT_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PRINT_H

#include "../ControllerTools/commandHelper.h"


class Print : public commandHelper
{
public:

    Print();
    ~Print();
    void run( int, char **, memoryCtrl & );
    static Icommand *  Create();


private:

    char * identifier;

    void setIdentifier( char ** );
    void getAndPrintSeq( memoryCtrl & );




};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_PRINT_H
