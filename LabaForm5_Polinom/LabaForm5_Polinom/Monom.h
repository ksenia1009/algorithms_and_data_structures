#include "stdafx.h"

using namespace std;
class Monom
{
private: 
	int A;
	int Sv;
	Monom *next;
public:
	Monom(int _A = 0, int _Sv = -1);
	~Monom();
	Monom(const Monom& m);
	Monom& operator=(const Monom& m);
	void setA(int _A);
	void setSv(int _Sv);
	int getA();
	int getSv();
	void setNext(Monom* _next);
	Monom* getNext();
	string MonomToString(int maxSt, int n);
	int StringToA(string str);
	int StringToSv(string _str, int maxSt, int k);
	Monom multiply(const Monom& rhs, int maxSt, int n);
};
Monom::Monom(int _A, int _Sv)
{
	A = _A;
	Sv = _Sv;
	next = this;
}
Monom::~Monom()
{
	next = NULL;
}
Monom::Monom(const Monom& m)
{
	A = m.A;
	Sv = m.Sv;
	next = this;
}
Monom& Monom::operator=(const Monom& m)
{
	A = m.A;
	Sv = m.Sv;
	next = this;
	return *this;
}
void Monom::setA(int _A)
{
	A = _A;
}
void Monom::setSv(int _Sv)
{
	Sv = _Sv;
}
void Monom::setNext(Monom* _next)
{
	next = _next;
}
int Monom::getA()
{
	return A;
}
int Monom::getSv()
{
	return Sv;
}
Monom* Monom::getNext()
{
	return next;
}
int Monom::StringToA(string str)
{
	int l = str.find("x");
	switch (l)
	{
	case 0:{return 1;}break;
	case 1:{
		if(str[0] == '-')
			   return -1;
		else 
			return stoi(str.substr(0,1));}
		   break;
	case -1:{return stoi(str);}break;
	default:{string tmp = str.substr(0,l);
		return stoi(tmp);}
		break;
	}
}
string Monom::MonomToString(int maxSt, int n)
{
	string res = "";
	int ost, chast = Sv;
	for(int i = n - 1; i >= 0; i--)
	{
		ost = chast % maxSt;
		chast = chast / maxSt;
		if(ost == 1)
		{
			res = "x" + to_string(i) + res;
		}
		if(ost > 1)
		{
			res = "x" + to_string(i) + "^" + to_string(ost) + res;
		}
	}
	res = to_string(A) + res;
	return res;
}
int Monom::StringToSv(string _str, int maxSt, int k)
{
	int *n = new int[k];
	string str = _str;
	string t;
	int l;
	for(int i = 0; i < k; i++)
	{
		t = "x" + to_string(i); //перевод в string
		l = str.find(t);
		if(l < 0 || l > str.length())
		{
			n[i] = 0;
		}
		else
		{
			str.erase(l, t.length());
			if(l < str.length() && str[l] == 'x' || l == str.length())
			{
				n[i] = 1;
			}
			else
			{
				string nst = "";
				str.erase(l, 1);
				while((l <= str.length()) && (str[l] >= '0') && (str[l] <= '9'))
				{
					nst += str[l];
					str.erase(l, 1);
				}
				n[i] = stoi(nst);
				if(n[i] >= maxSt)
					return -1;
			}
		}
	}
	int Sv = 0;
	for(int i = 0; i < k-1; i++)
		Sv = (Sv + n[i]) * maxSt;
	Sv += n[k-1];
	return Sv;
}
Monom Monom::multiply(const Monom& rhs, int maxSt, int n)
{
	Monom res(*this);
	res.setA(A * rhs.A);
	int *degs1 = new int[n];
	int *degs2 = new int[n];
	int c1 = Sv, c2 = rhs.Sv;
	for(int i = n - 1; i >= 0; i--)
	{
		degs1[i] = c1 % maxSt;
		c1 = c1 / maxSt;
		degs2[i] = c2 % maxSt;
		c2 = c2 / maxSt;
		degs1[i] = degs1[i] + degs2[i];
		if(degs1[i] >= maxSt)
			return Monom();
	}
	int s = 0;
	for(int i = 0; i < n; i++)
	{
		s = s * maxSt + degs1[i];
	}
	res.Sv = s;
	return res;
}