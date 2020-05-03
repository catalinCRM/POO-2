#ifndef ABONAT_SKYPE_EXTERN_H_INCLUDED
#define ABONAT_SKYPE_EXTERN_H_INCLUDED
#include"abonat_skype.h"

class abonat_skype_extern : public abonat_skype
{
protected:
    std::string tara;
public:
    abonat_skype_extern(int id_c, std::string nume_c, std::string nr_tel_c, std::string id_skype_c, std::string tara_c);
    abonat_skype_extern(const abonat_skype_extern &a);
    void set_tara(std::string tara_c);
    friend std::ostream& operator<<(std::ostream &o, abonat_skype_extern &a);
    friend std::istream& operator>>(std::istream &i, abonat_skype_extern &a);
    abonat_skype_extern& operator=(const abonat_skype_extern &p);
    ~abonat_skype_extern();
};

#endif // ABONAT_SKYPE_EXTERN_H_INCLUDED

