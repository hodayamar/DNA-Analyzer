#ifndef EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H

class  Idna
{
public:

    virtual ~Idna() = 0;

    virtual int getLength()const = 0;
    virtual char operator[](int)const = 0;//Nucleotide?

//protected:
//
//    class Nucleotide
//    {
//    public:
//        char c_sequence;
//
//        Nucleotide(char c ='A');
//        bool operator == (char);
//        Nucleotide* operator = (char);
//        Nucleotide* operator = (Nucleotide);
//
//        operator char()
//        {
//            return c_sequence;
//        };
//
//        char flip();
//
//    private:
//        void check_if_valid(char c_to_check) throw();
//    };



};
#endif //EXCELLENTEAM_ELLA_C_DNA_HODAYAMAR_IDNA_H
