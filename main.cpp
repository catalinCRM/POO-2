#include <iostream>
#include <fstream>
#include "persoana.h"
#include "abonat.h"
#include "abonat_skype.h"
#include "agenda.h"

using namespace std;

int main()
{
    ifstream f("date.in");
    auto *a = new agenda();
    f>>*a;
    cout<<*a<<endl;
    string nume;
    f>>nume;
    int id = (*a)[nume];
    cout<<"Abonatul cu id-ul:"<<id;
    return 0;
}
