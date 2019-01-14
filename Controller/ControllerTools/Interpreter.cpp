#include "Interpreter.h"
#include <cstring>


interpreter::interpreter()
{
    m_args = new args();
    m_command = NULL;
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
    m_commandName = m_args->argv[0];
    m_command = commandsFactory::Get()->CreateCommand(m_commandName);

    if ( m_command )

        m_command->run(m_args->argc, m_args->argv, m_memoryCtrl);
    else

        std::cout << m_commandName << ": command not found" << std::endl;
}



