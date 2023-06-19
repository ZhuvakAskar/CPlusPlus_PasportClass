#include "Passport.h"

Passport::Passport()
{
    this->series = rand()%1000;
    this->number = rand() % 1000;
    this->lname = "SampleLname";
    this->fname = "SampleFname";
    this->bday = Date();
    this->placeb = "PlaceB";
    this->giveD = Date();
    this->authority = rand() % 1000+rand()*43;
    this->surname = "SampleSurname";
    this->reg = "SampleReg";
    this->giveP = "SamplePlaceGive";
}

Passport::Passport(int series, int number, string lname, string fname, string surname, Date bday, string placeb, Date giveD,string gip, int authority, string reg)
{
    this->series = series;
    this->number = number;
    this->lname = lname;
    this->fname = fname;
    this->bday = bday;
    this->placeb = placeb;
    this->giveD = giveD;
    this->authority = authority;
    this->surname = surname;
    this->reg = reg;
    this->giveP = gip;
}

Passport::Passport(const Passport& obj)
{
    this->series = obj.series;
    this->number = obj.number;
    this->lname = obj.lname;
    this->fname = obj.fname;
    this->bday = obj.bday;
    this->placeb = obj.placeb;
    this->giveD = obj.giveD;
    this->authority = obj.authority;
    this->surname = obj.surname;
    this->reg = obj.reg;
}

int Passport::getseries() const&
{
    return this->series;
}

int Passport::getnumber() const&
{
    return this->number;
}

string Passport::getlname() const&
{
    return this->lname;
}

string Passport::getfname() const&
{
    return this->fname;
}

Date Passport::getbday() const&
{
    return this->bday;
}

string Passport::getplaceb() const&
{
    return this->placeb;
}

Date Passport::getgiveD() const&
{
    return this->giveD;
}

string Passport::getplaceg() const&
{
    return this->giveP;
}

int Passport::getauthority() const&
{
    return this->authority;
}

string Passport::getsurname() const&
{
    return this->surname;
}

string Passport::getreg() const&
{
    return this->reg;
}

void Passport::setseries(int n)
{
    this->series = n;
}

void Passport::setnumber(int n)
{
    this->number = n;
}

void Passport::setlname(string s)
{
    this->lname = s;
}

void Passport::setfname(string s)
{
    this->fname = s;
}

void Passport::setbday(Date d)
{
    this->bday = d;
}

void Passport::setplaceb(string s)
{
    this->placeb = s;
}

void Passport::setgiveD(Date d)
{
    this->giveD = d;
}

void Passport::setgivep(string s)
{
    this->giveP = s;
}

void Passport::setauthority(int n)
{
    this->authority = n;
}

void Passport::setsurname(string s)
{
    this->surname = s;
}

void Passport::setreg(string s)
{
    this->reg = s;
}

void Passport::showinfo() const&
{
    cout << "�.�.�.: " << this->getlname() << " " << this->getfname() << " " << this->getsurname() << endl;
    cout << "���� ��������: " << this->getbday() << endl;
    cout << "����� ��������: " << this->getplaceb() << endl;
    cout << "��������: " << this->getreg() << endl;
    cout << "����� ��������: " << this->getnumber() << endl;
    cout << "�����: " << this->getseries() << endl;
    cout << "���� ������: " << this->getgiveD() << endl;
    cout << "����� ������: " << this->getplaceg() << endl;
    cout << "������� �������: " << this->getauthority() << endl;
}

istream& operator>>(istream& is, Passport& obj)
{
    cout << "������ ���" << endl;
    is >> obj.fname;
    cout << "������ �������" << endl;
    is >> obj.surname;
    cout << "������ ��������" << endl;
    is >> obj.surname;
    cout << "������ ���� ��������" << endl;
    is >> obj.bday;
    cout << "������ ����� ��������" << endl;
    is >> obj.placeb;
    cout << "������ ����� ��������" << endl;
    is >> obj.number;
    cout << "������ �������� �����" << endl;
    is >> obj.series;
    cout << "������ ���� ���������" << endl;
    is >> obj.giveD;
    cout << "������ ����� ���������" << endl;
    is >> obj.giveP;
    cout << "������ �������� �����" << endl;
    is >> obj.authority;
    // TODO: �������� ����� �������� return
    return is;
}

ostream& operator<<(ostream& os, const Passport& obj)
{
    os << "�.�.�.: " << obj.getlname() << " " << obj.getfname() << " " << obj.getsurname() << endl;
    os << "���� ��������: " << obj.getbday() << endl;
    os << "����� ��������: " << obj.getplaceb() << endl;
    os << "��������: " << obj.getreg() << endl;
    os << "����� ��������: " << obj.getnumber() << endl;
    os << "�����: " << obj.getseries() << endl;
    os << "���� ������: " << obj.getgiveD() << endl;
    os << "����� ������: " << obj.getplaceg() << endl;
    os << "������� �������: " << obj.getauthority() << endl;
    // TODO: �������� ����� �������� return
    return os;
}
