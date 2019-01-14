#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H

#include "../../View/Cli.h"
#include "Icommand.h"
#include "MemoryCtrl.h"
#include "../../Model/Decorators/Idna.h"
#include "../Commands/New.h"
#include "../Commands/Print.h"
#include "../Commands/showList.h"
#include "../Commands/Load.h"
#include "../Commands/Save.h"
#include "../Commands/delete.h"
#include "../Commands/pair.h"
#include "../Commands/duplicate.h"
#include "../Commands/concate.h"
#include "../Commands/len.h"
#include "../Commands/renameDna.h"
#include "../Commands/slice.h"

typedef void (*exec)(int argc, char ** argv);

class interpreter
{
public:

    interpreter();
    ~interpreter();
    void run();
    void execCommand();

private:

    cli m_cli;
    memoryCtrl m_memoryCtrl;
    static std::map<char *, exec> commands;
    args * m_args;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_INTERPRETER_H
