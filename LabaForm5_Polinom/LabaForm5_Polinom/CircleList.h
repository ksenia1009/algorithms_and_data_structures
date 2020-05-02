#include "stdafx.h"
#include "Monom.h"

using namespace std;
class CircleList
{
private:
	Monom* head;
public:
	CircleList();
	~CircleList();
	CircleList(const CircleList& cl);
	CircleList& operator=(const CircleList& cl);
	void AddMonom(int A, int Sv);
	CircleList operator+(const CircleList& cl);
	CircleList operator-(const CircleList& cl);
	CircleList operator*(const int& n);
	string CircleToString(int maxSt, int n);
	CircleList multiply(CircleList& rhs, int maxSt, int n);
};
CircleList::CircleList()
{
	head = new Monom();
}
CircleList::~CircleList()
{
	Monom* cur = head->getNext();
	while(cur != head)
	{
		head->setNext(cur->getNext());
		cur->setNext(NULL);
		delete cur;
		cur = head->getNext();
	}
	head->setNext(NULL);
	delete head;
}
void CircleList::AddMonom(int A, int Sv)
{
	if (Sv == -1)
		return;
	Monom* m = new Monom(A, Sv);
	Monom* prev = head;
	Monom* cur = head->getNext();
	while(Sv < cur->getSv())
	{
		prev = cur;
		cur = cur->getNext();
	}
	if(cur->getSv() == Sv)
	{
		int nA = cur->getA() + A;
		if(nA != 0)
		{
			cur->setA(nA);
		}
		else
		{
			prev->setNext(cur->getNext());
			cur->setNext(nullptr);
			delete cur;
		}
	}
	else
	{
		prev->setNext(m);
		m->setNext(cur);
	}
}
CircleList::CircleList(const CircleList& cl)
{
	head = new Monom();
	Monom* cur = cl.head->getNext();
	Monom* last = head;
	while(cur != cl.head)
	{
		Monom* tmp = new Monom(*cur);
		tmp->setNext(head);
		last->setNext(tmp);
		last = tmp;
		cur = cur->getNext();
	}
}
CircleList& CircleList::operator=(const CircleList& cl)
{
	Monom* cur = head->getNext();
	while(cur != head)
	{
		head->setNext(cur->getNext());
		cur->setNext(NULL);
		delete cur;
		cur = head->getNext();
	}
	Monom* last = head;
	cur = cl.head->getNext();
	while(cur != cl.head)
	{
		last->setNext(new Monom(*cur));
        last = last->getNext();
        last->setNext(head);
		//Monom* tmp = new Monom(*cur);
		//tmp->setNext(head);
		//last->setNext(tmp);
		cur = cur->getNext();
	}
	return *this;
}
string CircleList::CircleToString(int maxSt, int n)
{
	if (head == head->getNext())
		return "";

	Monom *cur = head->getNext();
	string res = "";
	while(cur != head)
	{
		string tmp = cur->MonomToString(maxSt, n);
		if(tmp[0] == '-')
		{
			res += ("" + tmp);
		}
		else
		{
			res += ("+" + tmp);
		}
		cur = cur->getNext();
	}
	if (res[1] == '+')
		res.erase(0, 2);
	return res;
}
CircleList CircleList::operator+(const CircleList& cl)
{
	CircleList res(*this);
	Monom *cur = cl.head->getNext();
	while(cur != cl.head)
	{
		res.AddMonom(cur->getA(), cur->getSv());
		cur = cur->getNext();
	}
	return res;
}
CircleList CircleList::operator-(const CircleList& cl)
{
	CircleList res(*this);
	res = res + ((CircleList)cl * (-1));
	return res;
}
CircleList CircleList::operator*(const int& n)
{
	CircleList res(*this);
	Monom *cur = res.head->getNext();
	if(n == 0)
		return CircleList();
	while(cur != res.head)
	{
		cur->setA(cur->getA() * n);
		cur = cur->getNext();
	}
	return res;
}
CircleList CircleList::multiply(CircleList& rhs, int maxSt, int n)
{
	CircleList res;
	Monom *cur = head->getNext();
	while(cur != head)
	{
		Monom *m = rhs.head->getNext();
		while(m != rhs.head)
		{
			Monom r = (*cur).multiply((*m), maxSt, n); 
			res.AddMonom(r.getA(), r.getSv()); 
			m = m->getNext();
		}
		cur = cur->getNext();
	}
	return res;
}