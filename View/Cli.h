#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CLI_H

#include <stdio.h>
#include <map>
#include "parser.h"

typedef struct
{
    int argc;
    char ** argv;
}args;

class cli
{
public:

    void run(args *);
    inline void readLine();
    inline bool parseCommand();
    ~cli(){};

private:

    char line[1000];
    int argc;
    char *argv[20];
    Parser pars;


};

void cli::readLine()
{
    fgets(line, sizeof(line), stdin);
}

bool cli::parseCommand()
{
    pars.parseCommand(&argc, argv, line);
    return true;
}


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_CLI_H
