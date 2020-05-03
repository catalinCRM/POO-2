#ifndef PERSOANA_H_INCLUDED
#define PERSOANA_H_INCLUDED

class persoana
{
protected:
    int id;
    std::string nume;
public:
    persoana(int id_c, std::string nume_c);
    persoana(const persoana &p);
    void set_id(int id_c);
    void set_nume(std::string nume_c);
    friend std :: ostream& operator<<(std :: ostream &o, persoana &p);
    friend std :: istream& operator>>(std :: istream &i, persoana &p);
    persoana& operator=(const persoana &p);
    virtual ~persoana();
};

#endif // PERSOANA_H_INCLUDED
