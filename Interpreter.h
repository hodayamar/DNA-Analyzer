#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H

#include "Cli.h"
#include "Icommand.h"
#include "New.h"

class interpreter
{
public:

    interpreter();
    ~interpreter();
    void run();
    static void execCommand(int argc, char *argv[]);

private:

    cli * m_cli;
    static std::map<char *, exec> commands;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H
