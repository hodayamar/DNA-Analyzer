#include "Interpreter.h"
#include <cstring>

void interpreter::execCommand(int argc, char *argv[])
{
    if(strcmp(argv[0],"new")!=0)
    {
        Icommand* newC = new New();
        newC->run(argc,argv);
    }

}
void interpreter::run(){
    m_cli->run();
}
interpreter::interpreter()
{
    m_cli = new cli(&execCommand);
}


