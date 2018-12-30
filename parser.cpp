#include "parser.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void Parser::parseCommand(int * argc, char ** argv, char * line)
{
    const char delim[]={'\t','\n',' '};
    int i;
    i= 0;

    argv[i] = strtok(line, " ");

    while(argv[i] != NULL)
    {
        argv[++i]= strtok(NULL, delim);
    }
    if(line[strlen(line - 1)] == '\n')
        line[strlen(line - 1)] = '\0';

    *argc = i;

}