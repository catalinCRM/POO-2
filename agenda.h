#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED
#include "abonat_skype.h"
#include <vector>
class agenda
{
protected:
    std::vector <abonat_skype*> lista;
public:
    agenda(int n=0);
    agenda(const agenda &a);
    friend std::ostream& operator<<(std::ostream &o, agenda &a);
    friend std::istream& operator>>(std::istream &i, agenda &a);
    agenda& operator=(const agenda &a);
    int operator[](std::string pers);
    ~agenda();
};

#endif // AGENDA_H_INCLUDED
