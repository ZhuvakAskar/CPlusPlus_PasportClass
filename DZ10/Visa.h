#pragma once
#include"Header.h"
class Visa
{
	string country;
	Date open;
	Date close;
public:
	Visa();
	Visa(string c, Date o, Date cl);
	Visa(const Visa& obj);

	string getcon()const&;
	Date geto()const&;
	Date getc()const&;

	void setcon(string c);
	void seto(Date o);
	void setcl(Date c);

	friend istream& operator >> (istream& is, Visa& obj);
	friend ostream& operator << (ostream& os, const Visa& obj);
};

