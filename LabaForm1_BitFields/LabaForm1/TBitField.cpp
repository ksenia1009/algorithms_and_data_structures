#include "stdafx.h"
#include "TBitField.h"
//#include <iostream>
#include <cstring>
#include <cstdlib>

const unsigned byteSize = sizeof(unsigned);

int  TBitField::getBit(int nElem)
{
	return (nElem - 1) % (sizeof(*mem)*8);
}

int TBitField::getNumberMem(int nElem)
{
	return (nElem - 1) / (sizeof(mem)*8);
}

TBitField::TBitField(int sizeU) : sizeUniverse(sizeU)
{
	sizeMem = (sizeU + sizeof(mem)*8-1) >> 5; //~ (2^5 bit)
	mem = new int[sizeMem];
    //	memset(mem, 0, memSize * byteSize);
	for (int i = 0; i < sizeMem; i++) mem[i] = 0;
}

TBitField & TBitField::operator=(const TBitField & src)
{
	if (sizeMem != src.sizeMem && src.sizeMem!= 0)
	{
		delete[] mem;
		mem = new int[src.sizeMem];
		sizeMem = src.sizeMem;
		sizeUniverse = src.sizeUniverse;
		//memcpy(mem, src.mem, memSize * byteSize);
		for (int i = 0; i < sizeMem; i++)
		{
			mem[i] = src.mem[i];
			//std::cout << mem[i] << " ";
		}
	}
	else if (sizeMem == src.sizeMem && src.sizeMem != 0)
	{
		sizeUniverse = src.sizeUniverse;
		//memcpy(mem, src.mem, memSize * byteSize);
		for (int i = 0; i < sizeMem; i++)
		{
			mem[i] = src.mem[i];
			//std::cout << mem[i] << " ";
		}
	}
	
	return *this;
}

TBitField TBitField::operator+(const TBitField & src)
{
	TBitField res(0);
	if (sizeUniverse == src.sizeUniverse)
	{
		res = *this;
		for (int i = 0; i < sizeMem; ++i)
		{
			res.mem[i] |= src.mem[i];
			//std::cout << res.mem[i] << " ";
		}
	
	}
	return res;
}



TBitField TBitField::operator*(const TBitField & src)
{
	TBitField res(0);
	if (sizeUniverse == src.sizeUniverse)
	{
		res = *this;
		for (int i = 0; i < sizeMem; ++i) {
			res.mem[i] &= src.mem[i];
			//std::cout << res.mem[i] << " ";
		}
	}
	return res;
}


TBitField TBitField::operator!()
{
	TBitField res(*this);
	for (int  i = 0; i < sizeMem; ++i)
		res.mem[i] = ~mem[i];
	return res;
}


TBitField::TBitField(const TBitField & src)
{
	sizeMem = src.sizeMem;
	sizeUniverse = src.sizeUniverse;
	mem = new int[src.sizeMem];
	memcpy(mem, src.mem, sizeMem * byteSize);
}


TBitField::~TBitField()
{
	delete[] mem;
}

void TBitField::add(int el)
{
	if (el != 0)
	{
		*(mem + getNumberMem(el)) |= (1 << getBit(el));
		//std::cout << mem[getNum(n)] << " ";
	}
}

void TBitField::del(int el)
{
	*(mem + getNumberMem(el)) &= ~(1 << getBit(el));
}

int TBitField::getSize()
{
	return sizeMem;
}

void TBitField::showArr()
{
	for (int i = 0; i < getSize(); ++i)
		std::cout << mem[i] << " ";
}


std::string TBitField::toString()
{
	std::string str = "";
	
	int k = 0;
	for (int  i = 0; i < sizeMem; ++i)
	{ 
		//std::cout << mem[i] << " ";
		for (int j = 0; j < sizeof(mem)* 8; j++)
		{
			
			if (mem[i] & (1 << j)) 
			{
				k = sizeof(*mem) * 8 * i + j + 1;
				if (k <= sizeUniverse)
				{
					str += std::to_string(k) + " " ;

				}
			}
		}

	}
	return str;
}