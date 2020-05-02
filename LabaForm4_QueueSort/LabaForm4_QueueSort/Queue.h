#pragma once
#include "stdafx.h"
#include "Unit.h"
#include <string>

using namespace std;
class TQueue
{
private:
	Unit* head;
	Unit* last;
public:
	TQueue();
	~TQueue();
	TQueue(const TQueue& qu);
	TQueue& operator=(const TQueue& qu);
	void Push(int str);
	string Get();
	int isEmpty();
};
TQueue::TQueue()
{
	head = NULL;
	last = NULL;
}
TQueue::~TQueue()
{
	if(head!=NULL)
		delete head;
}
TQueue::TQueue(const TQueue& qu)
{
	if(qu.head==NULL)
	{
		head = NULL;
		last = NULL;
	}
	else
	{
		head = new Unit;
		head = qu.head;
		last = head;
		Unit* current;
		current = qu.head->getNext();
		while(current!=NULL)
		{
			last->setNext(new Unit(*current));
			last = last->getNext();
			current = current->getNext();
		}
	}
}
TQueue& TQueue::operator=(const TQueue& qu)
{
	if(qu.head==NULL)
	{
		if(head!=NULL)
		{
			delete head;
			head = NULL;
			last = NULL;
		}
	}
	else
	{
		if(head!=NULL)
		{
			delete head;
		}
			head = new Unit;
			head = qu.head;
			last = head;
			Unit* current = qu.head->getNext();
			while(current!=NULL)
			{
				Unit * tmp = new Unit ;
				tmp = current;
				last->setNext(tmp);
				last = last->getNext();
				current = current->getNext();
				
			}
		
	}
	return *this;
}
void TQueue::Push(int str)
{
	Unit* current = new Unit(str);
	if(last!=NULL)
	
	{
		last->setNext(current);
		last = last->getNext();
	}
	else
	{
		head = current;
		last = current;
	}
}
string TQueue::Get()
{
	string st = "";
	if(head!=NULL)
	{
		st = "";
		int tmp = head->getInform();
		if (tmp==0)
		{
			st = "0";
		}
		while (tmp>0)
		{
			st = char((tmp%10)+'0')+st;
			tmp /= 10;

		}
		if (head==last)
		{			
			delete head;
			head = NULL;
			last = NULL;
		}
		else
		{
			Unit* tmp = head;
			head = head->getNext();
			tmp->setNext(NULL);
			delete tmp;
		}
	}
	return st;
}
int TQueue::isEmpty()
{
	if(head==NULL&&last==NULL)
		return 1; //пустая
	else
		return 0; //полная
}
void strToArr(string _str, string * arr, int & countArr){
	string razd = " ";
	int len = _str.length(), lenRazd = razd.length(), f = 1, t = 0;
	countArr = 0;
	for (int j = 0; j < lenRazd; j++)
			if (_str[0] == razd [j]){
				f = 0;
				t = 1;
				break;
			}

	arr[countArr] = _str[0]; 
	for (int i = 1; i < len; i++){
		f = 1;
		for (int j = 0; j < lenRazd; j++)
			if (_str[i] == razd [j]){
				f = 0;
				t = 1;
				break;
			}
		if (f){
			if (t){
				arr[++countArr] = _str[i];
				t = 0;
			}
			else
				arr[countArr] += _str[i];
		}
	}
	countArr++;
}
int stoin (string st){
	int len = st.length(),sign = 1,res = 0, i = 0;
	if (st[0] == '-'){
		i = 1;
		sign = -1;
	}
	for (i; i < len; i++)
		res = 10 * res + (st[i] - '0');
	res *= sign;
	return res;
}
string itos (int t){
	string st = "";
	int tmp = t;
	while (tmp > 0){
		st = char((tmp % 10)+ '0') + st;
		tmp /= 10;
	}
	return st;
}
void Sort (const string str, int max, string * & arr, int & countArr, TQueue * & quArr, int & k, int f){
	for (int i = k; i < max; i++){
		for (int j = 0; j < countArr; j++)
			while (arr[j].length() < max)
				arr[j] = "0" + arr[j];
		for (int j = 0; j < countArr; j++){
			int l = (int)arr[j][max - 1 - i] - '0';
			quArr[l].Push(stoin(arr[j]));
		}
		if (k == max - 1)
			k = -2;
		if (f)
			break;
		int t = 0;
		for (int j = 0; j < 10; j++)
			while (quArr[j].isEmpty() == 0)
				arr[t++] = quArr[j].Get();
	}
}