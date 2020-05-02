#include "stdafx.h"
#include "Table.h"
#include "Stack.h"
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
class Polis
{
private:
	string str;
	string* pol;
	int size;
	int count; //количество элементов в массиве
	Table<double> tabval;
	Table<int> tabprior;
	Stack<Note<int> > stackoper;
	void MakeTabPrior();
	void StrToLecs(string str, const string &delimiters, int &k, string w[]); //деление строки на слова
	void WorkLeft(); //обработка левой скобки
	void WorkRight(); //обработка правой скобки
	void WorkOperand(string tmp); //обработка операнда
	void WorkOperation(Note<int> tmp); //обработка операции
	void WorkEndStr(); //обработка конца строки
	void MakePolis();
public:
	int getCount();
	string getPolis();
	string operator[](int k);
	Table<double>& getTable();
	Polis(string _str = " ");
	Polis(const Polis& p);
	~Polis();
	Polis& operator=(const Polis& p);
};
void Polis::MakeTabPrior()
{
	tabprior = Table<int>(5);
	tabprior.Add(Note<int>("+",1));
	tabprior.Add(Note<int>("-",1));
	tabprior.Add(Note<int>("*",2));
	tabprior.Add(Note<int>("/",2));
	tabprior.Add(Note<int>("^",3));
}
Polis::Polis(string _str)
{
	str = _str;
	pol = new string[_str.length()];
	size = _str.length();
	MakeTabPrior();
	stackoper = Stack<Note<int> >((size/2)+1);	
	tabval = Table<double>((size/2)+1);
	MakePolis();
}
Polis::~Polis()
{
	delete[] pol;
}
Polis::Polis(const Polis& p)
{
	str = p.str;
	size = p.size;
	pol = new string[size];
	count = p.count;
	for(int i=0;i<count;i++)
	{
		pol[i] = p.pol[i];
	}
	tabval = p.tabval;
	tabprior = p.tabprior;
	stackoper = p.stackoper;
}
Table<double>& Polis::getTable()
{
	return tabval;
}
Polis& Polis::operator=(const Polis& p)
{
	if (size!=p.size)
	{
		if (size!=0)
		{
			delete[] pol;
		}
		size = p.size;
		pol = new string[size];
	}
	str = p.str;
	count = p.count;
	for (int i=0; i<size; i++)
	{
		pol[i] = p.pol[i];
	}
	tabval = p.tabval;
	tabprior = p.tabprior;
	stackoper = p.stackoper;
	return *this;
}
void Polis::StrToLecs(string str, const string &delimiters, int &k, string w[]) 
{  
    string tmp = str + " ";
    k = 0;
    for (int i = 0; i < tmp.length(); i++) 
	{
        if (delimiters.find(tmp[i]) == string::npos) 
		{
            w[k].push_back(tmp[i]);
        } 
		else 
		{
            if  (tmp[i] == ' ') 
			{
                if (!w[k].empty()) 
				{
                    w[++k] = "";
                }
            } 
			else 
			{
                if (!w[k].empty()) 
				{
                    k++;
                }
                w[k] = tmp[i];
                w[++k] = "";
            }
        }
    }
    
}

void Polis::WorkLeft()
{
	Note<int> _tmp("(",0);
	stackoper.Push(_tmp);
}
void Polis::WorkRight()
{
	while (stackoper.Top().getName()!="(")
	{
		pol[count++] = stackoper.Pop().getName();
	}
	stackoper.Pop();
}
void Polis::WorkOperand(string tmp)
{
	pol[count++] = tmp;
	if ((tmp>="0")&&(tmp<="9"))
	{
		tabval.Add(Note<double>(tmp,stod(tmp)));	
	}
	else tabval.Add(Note<double>(tmp,0));
}
void Polis::WorkOperation(Note<int> tmp)
{
	while ((!stackoper.isEmpty())&&(stackoper.Top().getValue()>=tmp.getValue()))
	{
		pol[count++] = stackoper.Pop().getName();
	}
	stackoper.Push(tmp);
}
void Polis::WorkEndStr()
{
	while(!(stackoper.isEmpty()))
	{
		pol[count++] = stackoper.Pop().getName();
	}
}
int Polis::getCount()
{
	return count;
}
string Polis::operator[](int k)
{
	if((k>=0)&&(k<=count))
		return pol[k];
	else return " ";
}
string Polis::getPolis()
{
	string src = " ";
	for(int i=0;i<count;i++)
	{
		src = src + pol[i] + " ";
	}
	return src;
}
void Polis::MakePolis()
{
	int t = str.length();
	string *arrLecs = new string[t+1];
	int countLecs = 0;
	string razd = "+-*/^() ";
	StrToLecs(str,razd,countLecs,arrLecs);
	count = 0;
	for(int i=0;i<countLecs;i++)
	{
		if(arrLecs[i]=="(")
		{
			WorkLeft();
		}
		else
		{
			if(arrLecs[i]==")")
			{
				WorkRight();
			}
			else
			{
				Note<int> tmp = tabprior.Search(arrLecs[i]);
				if(tmp.getName()==" ")
				{
					WorkOperand(arrLecs[i]);
				}
				else
				{
					WorkOperation(tmp);
				}
			}
		}
	}
	WorkEndStr();
	delete[] arrLecs;
}
