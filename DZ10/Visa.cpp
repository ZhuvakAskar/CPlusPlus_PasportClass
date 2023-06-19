#include "Visa.h"

Visa::Visa()
{
    this->country = "country";
    this->open = Date();
}

Visa::Visa(string c, Date o, Date cl)
{
    this->country = c;
    this->open = o;
    this->close = cl;
}

Visa::Visa(const Visa& obj)
{
    this->country = obj.country;
    this->open = obj.open;
    this->close = obj.close;
}

string Visa::getcon() const&
{
    return this->country;
}

Date Visa::geto() const&
{
    return this->open;
}

Date Visa::getc() const&
{
    return this->close;
}

void Visa::setcon(string c)
{
    this->country = c;
}

void Visa::seto(Date o)
{
    this->open = o;
}

void Visa::setcl(Date c)
{
    this->close = c;
}

istream& operator>>(istream& is, Visa& obj)
{
    cout << "Ведите страну" << endl;
    is >> obj.country;
    cout << "Ведите дату открытия визы" << endl;
    is >> obj.open;
    cout << "Ведите дату закрытия визы" << endl;
    is >> obj.close;
    // TODO: вставьте здесь оператор return
    return is;
}

ostream& operator<<(ostream& os, const Visa& obj)
{
    os << "Страна: " << obj.country << endl;
    os << "Дата открытия визы: " << obj.open << endl;
    os << "Дата закрытия: " << obj.close << endl;
    // TODO: вставьте здесь оператор return
    return os;
}
