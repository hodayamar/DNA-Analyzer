#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H

#include <sstream>
#include "Nucleotide.h"
#include "sharedPtr.h"

#define defName "seq"


class  Idna
{
public:

    virtual ~Idna(){};

    virtual unsigned long getLength() const = 0;
    virtual Nucleotide operator[](int) const = 0;

    virtual int getIdSeq() const = 0;
    virtual std::string getNameSeq() const = 0;

protected:

    std::string nameSeq;
    int idSeq;
    static int autoInc;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
