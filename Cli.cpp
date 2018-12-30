#include "Cli.h"
#include <iostream>

cli::cli(exec execFuncToRun)
{
    execFunc = execFuncToRun;

}

void cli::run()
{
    while(true)
    {
        std::cout << "I'm dumb>>>";
        readLine();
        parseCommand();
        callCommand();
    }

}

