#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SLICE_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SLICE_H


#include "commandHelper.h"
#include "slicedDna.h"


class Slice : public commandHelper
{
public:

    Slice();
    ~Slice();
    void run( int, char **, memoryCtrl & );

private:

    char * identifier;
    size_t startIndex;
    size_t endIndex;
    IDNAp dnaToSlice;
    std::string name;


    void setIdentifier( char ** );
    void getAndPrintSeq( memoryCtrl & );
    bool idexesOutOfRange( int, int, int );
    void setIndexes( char * sIndex, char * eIndex );
    bool invalidLength( size_t, size_t );
    void setNameSeq( int, char ** );



    void sliceAndAddingSeqToDB( char **, memoryCtrl & );



};


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_SLICE_H
