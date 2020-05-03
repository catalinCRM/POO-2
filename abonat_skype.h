#ifndef ABONAT_SKYPE_H_INCLUDED
#define ABONAT_SKYPE_H_INCLUDED
#include "abonat.h"

class abonat_skype : public abonat
{
protected:
    std::string id_skype;
public:
    abonat_skype(int id_c=0, std::string nume_c="", std::string nr_tel_c="", std::string id_skype_c="");
    abonat_skype(const abonat_skype &a);
    void set_id_skype(std::string id_skype_c);
    std::string &get_nume();
    int &get_id();
    friend std::ostream& operator<<(std::ostream &o, abonat_skype &a);
    friend std::istream& operator>>(std::istream &i, abonat_skype &a);
    abonat_skype& operator=(const abonat_skype &a);
    virtual ~abonat_skype();
};

#endif // ABONAT_SKYPE_H_INCLUDED
