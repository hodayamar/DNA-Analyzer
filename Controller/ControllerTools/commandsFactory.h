#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDSFACTORY_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDSFACTORY_H

#include <iostream>
#include <map>
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

typedef Icommand* (* CreateCommandFn)(void);

typedef std::map<std::string, CreateCommandFn> FactoryMap;


class commandsFactory
{

public:

    ~commandsFactory();
    static commandsFactory * Get()
    {
        static commandsFactory instance;
        return &instance;
    }

    void Register( const char * commandName, CreateCommandFn pfnCreate );

    Icommand * CreateCommand( const char * commandName );

private:

    commandsFactory();

    FactoryMap m_FactoryMap;
    FactoryMap::iterator getCommandObject;
};

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_COMMANDSFACTORY_H
