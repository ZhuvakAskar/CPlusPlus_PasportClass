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
    cout << "������ ������" << endl;
    is >> obj.country;
    cout << "������ ���� �������� ����" << endl;
    is >> obj.open;
    cout << "������ ���� �������� ����" << endl;
    is >> obj.close;
    // TODO: �������� ����� �������� return
    return is;
}

ostream& operator<<(ostream& os, const Visa& obj)
{
    os << "������: " << obj.country << endl;
    os << "���� �������� ����: " << obj.open << endl;
    os << "���� ��������: " << obj.close << endl;
    // TODO: �������� ����� �������� return
    return os;
}
