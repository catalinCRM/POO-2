#include <iostream>
#include "abonat.h"

using namespace std;

abonat::abonat(int id_c, string nume_c, string nr_tel_c) : persoana(id_c, nume_c)
{
    nr_tel = nr_tel_c;
}

abonat::abonat(const abonat &a): abonat(a.id, a.nume, a.nr_tel) {}

void abonat::set_nr_tel(string nr_tel_c)
{
    nr_tel = nr_tel_c;
}

ostream& operator<<(ostream &o, abonat &a)
{
    o<<"ID:"<<a.id<<" "<<"NUME:"<<a.nume<<" "<<"NR_TEL:"<<a.nr_tel;
    return o;
}

istream& operator>>(istream &i, abonat &a)
{
    i>>a.id;
    i>>a.nume;
    i>>a.nr_tel;
    return i;
}

abonat &abonat::operator=(const abonat &a)
{
    this->id = a.id;
    this->nume = a.nume;
    this->nr_tel = a.nr_tel;
    return *this;
}

abonat::~abonat(){}
