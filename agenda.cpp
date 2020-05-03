#include <iostream>
#include "agenda.h"

using namespace std;

agenda::agenda(int n){}

ostream& operator<<(ostream &o, agenda &a)
{
    int n = a.lista.size();
    for(int i=0; i<n; i++)
        o<<*a.lista[i]<<endl;
    return o;
}

istream& operator>>(istream &i, agenda &a)
{
    int n;
    i>>n;
    for(int j=0; j<n; j++)
        {
            abonat_skype *abonat = new abonat_skype();
            i>>*abonat;
            a.lista.push_back(abonat);
        }
    return i;
}

agenda &agenda::operator=(const agenda &a)
{
    int n = a.lista.size();
    for(int i=0; i<n; i++)
    {
        abonat_skype *abonat = new abonat_skype();
        *abonat = *a.lista[i];
        this->lista.push_back(abonat);
    }
    return *this;
}

int agenda::operator[](string pers)
{
    int j;
    for(j=0; j<lista.size(); j++)
    {
        string nume = lista[j]->get_nume();
        if(nume == pers)
            return lista[j]->get_id();
    }
    cout<<"Nu exista persoana";
}

agenda::~agenda()
{
    for(int i=0; i<lista.size(); i++)
         delete lista[i];
}
