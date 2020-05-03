#include <iostream>
#include "abonat_skype_extern.h"

using namespace std;

abonat_skype_extern::abonat_skype_extern(int id_c, string nume_c, string nr_tel_c, string id_skype_c, string tara_c) : abonat_skype(id_c, nume_c, nr_tel_c, id_skype_c)
{
    tara = tara_c;
}

abonat_skype_extern::abonat_skype_extern(const abonat_skype_extern &a): abonat_skype_extern(a.id, a.nume, a.nr_tel, a.id_skype, a.tara) {}

void abonat_skype_extern::set_tara(string tara_c)
{
   tara = tara_c;
}

ostream& operator<<(ostream &o, abonat_skype_extern &a)
{
    o<<"ID:"<<a.id<<" "<<"NUME:"<<a.nume<<" "<<"NR_TEL:"<<a.nr_tel<<" "<<"ID_SKYPE:"<<a.id_skype<<" "<<"TARA:"<<a.tara;
    return o;
}

istream& operator>>(istream &i, abonat_skype_extern &a)
{
    i>>a.id;
    i>>a.nume;
    i>>a.nr_tel;
    i>>a.id_skype;
    i>>a.tara;
    return i;
}

abonat_skype_extern &abonat_skype_extern::operator=(const abonat_skype_extern &a)
{
    this->id = a.id;
    this->nume = a.nume;
    this->nr_tel = a.nr_tel;
    this->id_skype = a.id_skype;
    this->tara = a.tara;
    return *this;
}

abonat_skype_extern::~abonat_skype_extern(){}

