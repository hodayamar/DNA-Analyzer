#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAHELPER_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAHELPER_H

#include "Idna.h"
#include "sharedPtr.h"

#define defName "seq"

typedef sharedPtr<Idna> IDNAp;

class dnaHelper : public Idna
{

public:

    int getIdSeq()const;
    std::string getNameSeq()const;
    void setNameSeq( std::string );

protected:

    void setToDefualtName();

};

inline int dnaHelper::getIdSeq()const
{
    return idSeq;
}

inline std::string dnaHelper::getNameSeq()const
{
    return nameSeq;
}

inline void dnaHelper::setNameSeq(std::string newNameSeq)
{
    nameSeq = newNameSeq;
}


#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAHELPER_H
