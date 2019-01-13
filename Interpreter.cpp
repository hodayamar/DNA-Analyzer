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
        std::cout << "im in load" << std::endl;

        Icommand* loadC = new load();
        loadC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "showList") == 0)
    {
        Icommand* showListC = new showList();
        showListC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "save") == 0)
    {
        Icommand* saveC = new save();
        saveC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "delete") == 0)
    {
        Icommand* deleteC = new deleteSeq();
        deleteC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "pair") == 0)
    {
        Icommand* pairC = new pair();
        pairC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "dup") == 0)
    {
        Icommand* dupC = new duplicate();
        dupC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "concat") == 0)
    {
        Icommand* concateC = new concate();
        concateC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }

    else if(strcmp(m_args->argv[0], "len") == 0)
    {
        Icommand* lenC = new length();
        lenC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }
}



