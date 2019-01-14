#include "Cli.h"
#include <iostream>

void cli::run(args * m_args)
{
    std::cout << ">>>";
    readLine();
    parseCommand();

    m_args->argc = argc;
    m_args->argv = argv;
}

