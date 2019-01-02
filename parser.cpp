#include "parser.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void Parser::parseCommand(int * argc, char ** argv, char * line)
{

    int i = -1;
    char ** argvTemp = argv;

    while (*line != '\0')
    {
        while (*line == ' ' || *line == '\t' || *line == '\n')
        {
            *line++ = '\0';
            ++i;
        }


        *argv++ = line;

        while (*line != '\0' && *line != ' ' &&
               *line != '\t' && *line != '\n')

            line++;
    }

    *argv = '\0';
    *argc = i--;
    argv = argvTemp;
}