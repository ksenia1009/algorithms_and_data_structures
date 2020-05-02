#pragma once
#include "TBitField.h"

class TSet
{
private:
	std::string src;
	int sizeUn;
	TBitField tb;
public:
	TSet(int sizeUn = 0, std::string src = "");
	~TSet();
	TSet(const TSet & ts);
	TSet & operator= (const TSet & ts);
	void add(int count);
	TSet operator+ (const TSet & ts);
	TSet operator* (const TSet & ts);
	TSet operator! ();
	friend std::istream & operator>> (std::istream & is, TSet & ts);
	friend std::ostream & operator<< (std::ostream & os, TSet & ts);
	void putNumbers(const std::string & src);
	std::string getNumbers();
	int split_words(const std::string & str, std::string * words, int k = 0);
};

std::string SystemToStl(System::String ^ s);