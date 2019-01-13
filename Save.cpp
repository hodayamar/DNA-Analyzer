#include "Save.h"

save::save()
{
    minNumOfElements = 1;
    maxNumOfElements = 2;
}

save::~save()
{
    std::cout<<"im in save dtor\n";
}

void save::setIdentifier( char ** argv )
{
    identifier = argv[minNumOfElements];
}

void save::setFileName( int argc, char ** argv )
{
    //TODO - SWITCH/CASE
    if(argc == 2)
        fileName = argv[maxNumOfElements];
    else
        fileName = dnaToSave->getNameSeq() + ".rawdna";
}

void save::saveSeqToFile()
{
    DnaWriter dnaWriter( fileName, dnaToSave );
    dnaWriter.write();
}


void save::run( int argc, char **argv, memoryCtrl & m_memoryCtrl )
{
    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    dnaToSave = getSeq( identifier, m_memoryCtrl );

    setFileName( argc, argv);

    saveSeqToFile();
}