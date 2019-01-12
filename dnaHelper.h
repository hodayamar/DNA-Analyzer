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

#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_DNAHELPER_H
