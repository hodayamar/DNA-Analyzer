#include "Interpreter.h"
#include <cstring>


interpreter::interpreter()
{
    m_args = new args();
}

void interpreter::run(){
    while(1)
    {
        m_cli.run(m_args);
        execCommand();
    }
}

void interpreter::execCommand()
{
    if(strcmp(m_args->argv[0], "new") == 0)
    {

        Icommand* newC = new New();
        newC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "print") == 0)
    {
        Icommand* printC = new Print();
        printC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "load") == 0)
    {
        Icommand* loadC = new load();
        loadC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "showList") == 0)
    {
        Icommand* showListC = new showList();
        showListC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }
}



