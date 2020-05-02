#pragma once
#include "stdafx.h"
#include <stdlib.h>

class Unit
{
private: 
	int inform;
	Unit* next;
public:
	Unit(int _inform);
	~Unit();
	Unit();
	Unit(const Unit& un);
	Unit& operator=(const Unit& un);
	void setInform(int _inf);
	Unit* getNext();
	int getInform();
	void setNext(Unit* _next);
};
Unit::Unit(int _inform)
{
	inform = _inform;
	next = NULL;
}
Unit::~Unit()
{
	if(next!=NULL)
		delete[] next;
}
Unit::Unit()
{
	next = NULL;
}
Unit& Unit::operator=(const Unit& un)
{
	inform = un.inform;
	next = NULL;
	return *this;
}
Unit::Unit(const Unit& un)
{
	inform = un.inform;
	next = NULL;
}
void Unit::setInform(int _inf)
{
	inform = _inf;
}
Unit* Unit::getNext()
{
	return next;
}
int Unit::getInform()
{
	return inform;
}
void Unit::setNext(Unit* _next)
{
	next = _next;
}