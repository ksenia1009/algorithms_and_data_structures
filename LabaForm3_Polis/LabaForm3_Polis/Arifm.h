#include "stdafx.h"
#include "Polis.h"
#include <cmath>
class Arifm
{
private:
	Polis pol;
public:
	Arifm(string str = " ");
	Arifm(const Arifm& ar);
	~Arifm();
	Arifm& operator=(const Arifm& ar);
	double getValue();
	string toString();
	int getCountTable();
	Note<double> operator[](int k);
	void setValue(string _name, double val);
	string getPoliz();
};
Arifm::Arifm(string str)
{
	pol = Polis(str);
}
Arifm::Arifm(const Arifm& ar)
{
	pol = Polis(ar.pol);
}
Arifm::~Arifm()
{
}
Arifm& Arifm::operator=(const Arifm& ar)
{
	pol = ar.pol;
	return *this;
}
int Arifm::getCountTable()
{
	return pol.getTable().getCount();
}
string Arifm::toString()
{
	return pol.getPolis();
}
Note<double> Arifm::operator[](int k)
{
	return pol.getTable()[k];
}
void Arifm::setValue(string _name, double val)
{
	if(pol.getTable().Search(_name).getName()!=" ")
	{
		pol.getTable().Add(Note<double>(_name,val));
	}
}
double Arifm::getValue()
{
	double left, right;
	Stack<double> st(20);
	for(int i=0;i<pol.getCount();i++)
	{
		if(pol[i]=="+")
		{
			right = st.Pop();
			left = st.Pop();
			st.Push(left+right);
		}
		else 
		{
			if(pol[i]=="-")
			{
				right = st.Pop();
				left = st.Pop();
				st.Push(left-right);
			}
			else
			{
				if(pol[i]=="*")
				{
					right = st.Pop();
					left = st.Pop();
					st.Push(left*right);
				}
				else
				{
					if(pol[i]=="/")
					{
						right = st.Pop();
						left = st.Pop();
						st.Push(left/right);
					}
					else
					{
						if(pol[i]=="^")
						{
							right = st.Pop();
							left = st.Pop();
							st.Push(pow(left,right));
						}
						else
						{
							st.Push(pol.getTable().Search(pol[i]).getValue());
						}
					}
				}
			}
		}
	}
	return st.Pop();
}
string Arifm::getPoliz()
{
	string tmp;
	tmp = pol.getPolis();
	return tmp;
}