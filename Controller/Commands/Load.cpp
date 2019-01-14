#include "Load.h"

load::load()
{
    minNumOfElements = 1;
    maxNumOfElements = 2;
}

load::~load()
{
    std::cout << "im in load dtor" << std::endl;
}

void load::setNameSeq( int argc, char ** argv, memoryCtrl & memctrl )
{
    switch ( argc )
    {
        case 1:
        {

            name = "";
            break;
        }
        case 2:
        {
            if ( ! memctrl.nameNotExist( argv[2] ) )
                name = "";

            else
                name = argv[2];

            break;
        }
    }
}

bool load::fileNotExist(char ** argv)
{
    if (! m_dnaReader.fileIsExist(argv[1]))
    {
        std::cout << "The file does not exist" << std::endl;
        return true;
    }

    return false;
}

void load::createAndAddingSeqToDB(memoryCtrl & memctrl)
{
    IDNAp newDna(new DnaSequence (seqFromFile.c_str(), name));
    memctrl.addDnaSeq(newDna->getIdSeq(), newDna->getNameSeq(), newDna );
}



void load::run( int argc, char ** argv, memoryCtrl & m_memctrl )
{
    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;
    
    if( fileNotExist( argv ) )
        return;
        
    seqFromFile = m_dnaReader.readSeqFromFile( argv[1] );

    setNameSeq( argc, argv, m_memctrl );

    createAndAddingSeqToDB( m_memctrl );
}

Icommand *  load::Create()
{
    return new load();
}

