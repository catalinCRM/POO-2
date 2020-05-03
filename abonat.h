#ifndef ABONAT_H_INCLUDED
#define ABONAT_H_INCLUDED
#include "persoana.h"

class abonat : public persoana
{
protected:
    std::string nr_tel;
public:
    abonat(int id_c, std::string nume_c, std::string nr_tel_c);
    abonat(const abonat &a);
    void set_nr_tel(std::string nr_tel_c);
    friend std::ostream& operator<<(std::ostream &o, abonat &a);
    friend std::istream& operator>>(std::istream &i, abonat &a);
    abonat& operator=(const abonat &a);
    virtual ~abonat();
};

#endif // ABONAT_H_INCLUDED
