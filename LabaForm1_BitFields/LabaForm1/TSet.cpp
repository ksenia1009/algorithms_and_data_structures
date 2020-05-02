#include "stdafx.h"
#include "TSet.h"

TSet::TSet(int sizeUn, std::string src) : sizeUn(sizeUn), tb(sizeUn)
{
	if (src != "")
		putNumbers(src);
}

TSet::~TSet()
{
}

TSet::TSet(const TSet & ts) : sizeUn(ts.sizeUn), tb(ts.tb)
{}

TSet & TSet::operator=(const TSet & ts)
{
	if (sizeUn != ts.sizeUn)
		sizeUn = ts.sizeUn;
	tb = ts.tb;
	return *this;
}

void TSet::add(int count)
{
	if ((count > 0) && (count <= sizeUn))
		tb.add(count);
}

TSet TSet::operator+(const TSet & ts)
{
	TSet res(0);
	res.tb = tb + ts.tb;
	res.sizeUn = res.tb.getSize();
	return res;
}

TSet TSet::operator*(const TSet & ts)
{
	TSet res(0);
	res.tb = tb * ts.tb;
	res.sizeUn = res.tb.getSize();
	return res;
}

TSet TSet::operator!()
{
	TSet res(*this);
	res.tb = !tb;
	return res;
}




void TSet::putNumbers(const std::string & src)
{
	std::string * mas = new std::string[sizeUn];
	int count = split_words(src, mas);
	for (int i = 0; i < count; ++i)
		add(stoi(mas[i]));
	delete[] mas;
}

std::string TSet::getNumbers()
{
	return tb.toString();
}

int TSet::split_words(const std::string & str, std::string * w, int k)
{
	const std::string zn = " .,!?:;";
	std::string tmp = str + " ";
	for (unsigned i = 0; i < tmp.size(); i++)
	{
		if (zn.find(tmp[i]) == std::string::npos) // zn.find(tmp[i]) вернёт string::npos если не найдёт соответсвие
			w[k] = w[k] + tmp[i];            // string::npos ==== несуществующая позиция
		else if (tmp[i] != ' ' && w[k] != "" || tmp[i] == ' ' && w[k].size() > 0)
			w[++k] = "";
	}
	return k;
}

std::istream & operator>>(std::istream & is, TSet & ts)
{
	is >> ts.getNumbers();
	return is;
}

std::ostream & operator<<(std::ostream & os, TSet & ts)
{
	os << ts.getNumbers();
	return os;
}
std::string SystemToStl(System::String ^ s)
{
	using namespace System::Runtime::InteropServices;
	const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	return std::string(ptr);
}