#include "parser.h"


void Parser::parseCommand(int * argc, char ** argv, char * line)
{
    int cntr = 0;
    while (*line != '\0')
    {
        while (*line == ' ' || *line == '\t' || *line == '\n')
            *line++ = '\0';

        *argv++ = line;
        ++cntr;


        while (*line != '\0' && *line != ' ' &&
               *line != '\t' && *line != '\n')

            line++;
    }

    *argv = '\0';
    * argc = cntr;
}