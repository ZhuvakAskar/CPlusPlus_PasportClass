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
    cout << "Ф.И.О.: " << this->getlname() << " " << this->getfname() << " " << this->getsurname() << endl;
    cout << "Дата рождения: " << this->getbday() << endl;
    cout << "Место рождения: " << this->getplaceb() << endl;
    cout << "Прописка: " << this->getreg() << endl;
    cout << "Номер паспорта: " << this->getnumber() << endl;
    cout << "Серия: " << this->getseries() << endl;
    cout << "Дата выдачи: " << this->getgiveD() << endl;
    cout << "Место выдачи: " << this->getplaceg() << endl;
    cout << "Выданно органом: " << this->getauthority() << endl;
}

istream& operator>>(istream& is, Passport& obj)
{
    cout << "Ведите Имя" << endl;
    is >> obj.fname;
    cout << "Ведите Фамилию" << endl;
    is >> obj.surname;
    cout << "Ведите отчество" << endl;
    is >> obj.surname;
    cout << "Ведите дату рождения" << endl;
    is >> obj.bday;
    cout << "Ведите место рождения" << endl;
    is >> obj.placeb;
    cout << "Ведите номер паспорта" << endl;
    is >> obj.number;
    cout << "Ведите серийный номер" << endl;
    is >> obj.series;
    cout << "Ведите дату получения" << endl;
    is >> obj.giveD;
    cout << "Ведите место получения" << endl;
    is >> obj.giveP;
    cout << "Ведите выдавший орган" << endl;
    is >> obj.authority;
    // TODO: вставьте здесь оператор return
    return is;
}

ostream& operator<<(ostream& os, const Passport& obj)
{
    os << "Ф.И.О.: " << obj.getlname() << " " << obj.getfname() << " " << obj.getsurname() << endl;
    os << "Дата рождения: " << obj.getbday() << endl;
    os << "Место рождения: " << obj.getplaceb() << endl;
    os << "Прописка: " << obj.getreg() << endl;
    os << "Номер паспорта: " << obj.getnumber() << endl;
    os << "Серия: " << obj.getseries() << endl;
    os << "Дата выдачи: " << obj.getgiveD() << endl;
    os << "Место выдачи: " << obj.getplaceg() << endl;
    os << "Выданно органом: " << obj.getauthority() << endl;
    // TODO: вставьте здесь оператор return
    return os;
}
