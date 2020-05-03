#include <iostream>
#include "persoana.h"

using namespace std;

persoana::persoana(int id_c, string nume_c)
{
    id = id_c;
    nume = nume_c;
}

persoana::persoana(const persoana &p)
{
    id = p.id;
    nume = p.nume;
}

void persoana::set_id(int id_c)
{
    id = id_c;
}

void persoana::set_nume(string nume_c)
{
    nume = nume_c;
}

ostream& operator<<(ostream &o, persoana &p)
{
    o<<"ID: "<<p.id<<" "<<"NUME: "<<p.nume;
    return o;
}

istream& operator>>(istream &i, persoana &p)
{
    i>>p.id;
    i>>p.nume;
    return i;
}

persoana &persoana::operator=(const persoana &p)
{
    this->id = p.id;
    this->nume = p.nume;
    return *this;
}

persoana::~persoana()
{}

