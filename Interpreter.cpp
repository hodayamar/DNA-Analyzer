#include "Interpreter.h"
#include <cstring>

void interpreter::execCommand()
{
    if(strcmp(m_args->argv[0], "new") == 0)
    {
        Icommand* newC = new New();
        newC->run(m_args->argc, m_args->argv, m_memoryCtrl);
    }
}

void interpreter::run(){
    while(true)
    {
        m_cli.run(m_args);
        execCommand();
    }
}

interpreter::interpreter()
{
    m_args = new args();
}


