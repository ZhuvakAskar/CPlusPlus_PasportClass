#pragma once
#include "Header.h"
class Passport
{
	int series;
	int number;
	string placeb;
	Date giveD;
	string giveP;
	int authority;

protected:
	string lname;
	string fname;
	string surname;
	Date bday;
	string reg;
	
public:
	Passport();
	Passport(int series, int number, string lname, string fname,string surname, Date bday, string placeb,
		Date giveDate, string giveP, int authorityf,string reg);
	Passport(const Passport& obj);

	int getseries()const&;
	int getnumber()const&;
	string getlname()const&;
	string getfname()const&;
	Date getbday()const&;
	string getplaceb()const&;
	Date getgiveD()const&;
	string getplaceg()const&;
	int getauthority()const&;
	string getsurname()const&;
	string getreg()const&;

	void setseries(int n);
	void setnumber(int n);
	void setlname(string s);
	void setfname(string s);
	void setbday(Date d);
	void setplaceb(string s);
	void setgiveD(Date d);
	void setgivep(string s);
	void setauthority(int n);
	void setsurname(string s);
	void setreg(string s);

	void showinfo()const&;

	friend istream& operator >> (istream& is, Passport& obj);
	friend ostream& operator << (ostream& os, const Passport& obj);
};

