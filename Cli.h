#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CLI_H

#include <stdio.h>
#include <map>
#include "parser.h"

typedef void (*exec)(int argc, char ** argv);//??

class cli
{
public:

    cli(exec);
    void run();
    inline void readLine();
    inline bool parseCommand();
    inline void callCommand();
    ~cli();

private:

    char line[1000];
    int * argc;
    char *argv[20];
    Parser pars;
    exec execFunc;

    cli(const cli &);
    void operator=(const cli &);
};

void cli::readLine()
{
    fgets(line, sizeof(line), stdin);
}

bool cli::parseCommand()
{
    pars.parseCommand(argc, argv, line);
    return true;
}

void cli::callCommand()
{
    execFunc(*argc, argv);
}

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CLI_H
