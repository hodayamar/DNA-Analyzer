#include "commandsFactory.h"


commandsFactory::commandsFactory()
{
    Register("new", &New::Create);
    Register("print", &Print::Create);
    Register("showList", &showList::Create);
    Register("load", &load::Create);
    Register("save", &save::Create);
    Register("delete", &deleteSeq::Create);
    Register("pair", &pair::Create);
    Register("duplicate", &duplicate::Create);
    Register("concate", &concate::Create);
    Register("len", &length::Create);
    Register("rename", &renameSeq::Create);
    Register("slice", &Slice::Create);
}

void commandsFactory::Register(const char * commandName, CreateCommandFn pfnCreate)
{
    m_FactoryMap.insert( std::pair<std::string, CreateCommandFn>(commandName, pfnCreate) );
}

Icommand * commandsFactory::CreateCommand( const char * commandName )
{
    getCommandObject = m_FactoryMap.find( commandName );

    if( getCommandObject != m_FactoryMap.end() )

        return getCommandObject->second();

    return NULL;
}


commandsFactory::~commandsFactory()
{
    m_FactoryMap.clear();
}