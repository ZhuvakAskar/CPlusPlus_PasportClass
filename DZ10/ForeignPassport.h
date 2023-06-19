#pragma once
#include "Passport.h"
#include "Visa.h"
class ForeignPassport :
    public Passport
{
    int serial;
    int num;
    Date giveD;
    string authority;

    Visa* mas;
    int count;
public:
    ForeignPassport();
    ForeignPassport(int series, int number, string lname, string fname, string surname, Date bday, string placeb,
        Date giveD, string giveP, int authority, string reg, int serial, int num, Date giveDate, string authorityf);
    ForeignPassport(const ForeignPassport& obj);

    int getser()const&;
    int getnum()const&;
    int getcount()const&;
    Date getgived()const&;
    string getauthority()const&;

    void setser(int ser);
    void setnum(int num);
    void setgived(Date g);
    void setauthority(string authority);

    void addvisa(Visa obj);
    void dellvisa(Visa obj);

    void showinfo()const&;
    void showvisas()const&;
};

