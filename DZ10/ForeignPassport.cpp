#include "ForeignPassport.h"
#include "Passport.h"
ForeignPassport::ForeignPassport():Passport()
{
    this->serial = rand()%1000+1000;
    this->num = rand()%1000+1000;
    this->giveD = Date();
    this->authority = rand()%1000;
    this->count = 0;
}

ForeignPassport::ForeignPassport(int series, int number, string lname, string fname, string surname, Date bday, string placeb,
    Date giveD, string giveP, int authority, string reg,int serial, int num, Date giveDate, string authorityf):
    Passport(series,number,lname,fname,surname,bday,placeb,giveD,giveP,authority,reg)
{
    this->serial = serial;
    this->num = num;
    this->giveD = giveDate;
    this->authority = authorityf;
    this->count = 0;
}

ForeignPassport::ForeignPassport(const ForeignPassport& obj)
{
    this->serial = obj.serial;
    this->num = obj.num;
    this->giveD = obj.giveD;
    this->authority = obj.authority;
}

int ForeignPassport::getser() const&
{
    return this->serial;
}

int ForeignPassport::getnum() const&
{
    return this->num;
}

int ForeignPassport::getcount() const&
{
    return this->count;
}

Date ForeignPassport::getgived() const&
{
    return this->giveD;
}

string ForeignPassport::getauthority() const&
{
    return this->authority;
}

void ForeignPassport::setser(int ser)
{
    this->serial = ser;
}

void ForeignPassport::setnum(int num)
{
    this->num = num;
}

void ForeignPassport::setgived(Date g)
{
    this->giveD = g;
}

void ForeignPassport::setauthority(string authority)
{
    this->authority = authority;
}

void ForeignPassport::addvisa(Visa obj)
{
        Visa* tmp = new Visa[++count];
        for (int i = 0; i < count - 1; i++) {
            tmp[i] = mas[i];
        }
        if (mas != NULL) {
            delete[]mas;
        }
        tmp[count - 1] = obj;
        mas = tmp;
        this->count++;
}

void ForeignPassport::dellvisa(Visa obj)
{
    bool n = false;
    for (int i = 0; i < count; i++) {
        if (mas[i].getcon() == obj.getcon() && mas[i].geto() == obj.geto()) {
            n = true;
            mas[i] = mas[count - 1];
            count -= 1;
        }
    }
    if (n == true) {
        cout << "�������� ������ �������" << endl;
    }
    else { cout << "���� �� �������" << endl; }
}

void ForeignPassport::showinfo() const&
{
    cout << "����� ������.�������: " << getnum() << endl;
    cout << "�������� �����: " << getser()<< endl;
    cout << "���� ������:" << getgived() << endl;
    cout << "����� ������������: " << getauthority() << endl;
    cout << "���������� ���: " << getcount() << endl;
}

void ForeignPassport::showvisas() const&
{
    if (this->count != 0) {
        for (int i = 0; i < count; i++) {
            cout << "-----------------------------------------" << endl;
            cout << "�������: " << mas[i].getcon() << endl;
            cout << "���� ��������: " << mas[i].geto() << endl;
            cout << "���� ���������: " << mas[i].getc() << endl;

        }
    }
    else {
        cout << "���� ����������" << endl;
    }
}
