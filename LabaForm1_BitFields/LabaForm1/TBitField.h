#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>


//using namespace std;

class TBitField
{
private:
	int sizeUniverse;
	int* mem;
	int sizeMem;
	int getBit(int nElem);
	int getNumberMem(int nElem);
public:
	TBitField(int sizeU=0);
	~TBitField();
	TBitField(const TBitField& _bf);	
	int getSizeUniverse();
	void add(int el);
	void del(int el);
	TBitField& operator=(const TBitField& _bf);
	TBitField operator+(const TBitField& bfR);
	TBitField operator*(const TBitField& bfR);
	TBitField operator!();
	std::string toString();
	int getSize();
	void showArr();
};