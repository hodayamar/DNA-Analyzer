#include "slice.h"

Slice::Slice()
{
    minNumOfElements = 3;
    maxNumOfElements = 5;

}


Slice::~Slice()
{
    std::cout << "im in Slice dtor!!!" << std::endl;

}

void Slice::setIdentifier( char ** argv)
{
    identifier = argv[1];
}

bool Slice::idexesOutOfRange( int startIndex, int endIndex, int seqLength )
{
    if ( (startIndex < 0) | (endIndex > seqLength) )
    {
        std::cout << "Indexes out of the range" << std::endl;
        return true;
    }

    return false;
}

void Slice::setIndexes( char * sIndex, char * eIndex )
{
    startIndex =  atoi ( sIndex );
    endIndex = atoi ( eIndex );
}

bool Slice::invalidLength( size_t s, size_t e )
{
    if ( ( e - s ) % 3  )
    {
        std::cout << "invalid length of seq" << std::endl;
        return true;
    }

    return false;
}

void Slice::setNameSeq( int argc, char ** argv )
{
    if( argc == maxNumOfElements )
    {
        name = argv[3];
        return;
    }

    name = "";
}

Icommand *  Slice::Create()
{
    return new Slice();
}



void Slice::sliceAndAddingSeqToDB( char **argv, memoryCtrl & memctrl )
{
    setIndexes( argv[2], argv[3] );

    dnaToSlice = getSeq( identifier, memctrl );


    if ( idexesOutOfRange( startIndex, endIndex, dnaToSlice-> getLength()) |
         invalidLength( startIndex, endIndex ) )
        return;

    IDNAp sliceDna( new slicedDna ( dnaToSlice, startIndex, endIndex, name ) );
    memctrl.addDnaSeq( sliceDna->getIdSeq(), sliceDna->getNameSeq(), sliceDna );
}


void Slice::run( int argc, char **argv, memoryCtrl & memctrl ) {

    if( wrongNumOfElements( argc, minNumOfElements, maxNumOfElements ) )
        return;

    setIdentifier( argv );

    if( wrongIdentifier( identifier ) )
        return;

    setNameSeq( argc, argv );

    sliceAndAddingSeqToDB( argv, memctrl );
}