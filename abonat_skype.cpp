#include <iostream>
#include "abonat_skype.h"

using namespace std;

abonat_skype::abonat_skype(int id_c, string nume_c, string nr_tel_c, string id_skype_c) : abonat(id_c, nume_c, nr_tel_c)
{
    id_skype = id_skype_c;
}

abonat_skype::abonat_skype(const abonat_skype &a): abonat_skype(a.id, a.nume, a.nr_tel, a.id_skype) {}

void abonat_skype::set_id_skype(string id_skype_c)
{
    id_skype = id_skype_c;
}

int &abonat_skype::get_id()
{
    return id;
}

std :: string &abonat_skype::get_nume()
{
    return nume;
}

ostream& operator<<(ostream &o, abonat_skype &a)
{
    o<<"ID:"<<a.id<<" "<<"NUME:"<<a.nume<<" "<<"NR_TEL:"<<a.nr_tel<<" "<<"ID_SKYPE:"<<a.id_skype;
    return o;
}

istream& operator>>(istream &i, abonat_skype &a)
{
    i>>a.id;
    i>>a.nume;
    i>>a.nr_tel;
    i>>a.id_skype;
    return i;
}

abonat_skype &abonat_skype::operator=(const abonat_skype &a)
{
    this->id = a.id;
    this->nume = a.nume;
    this->nr_tel = a.nr_tel;
    this->id_skype = a.id_skype;
    return *this;
}

abonat_skype::~abonat_skype(){}

