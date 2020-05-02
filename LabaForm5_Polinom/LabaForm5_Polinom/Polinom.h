#include "stdafx.h"
#include "CircleList.h"

class Polynomial {
private:
	int maxDeg;
	int varCount;
	CircleList *list;
	std::string polynomialStr;

	void stringToWords(std::string str, std::string words[], int &size);

	int stringToCoeff(std::string str);

	int stringToConvolution(std::string str, int maxSt, int k);

public:
	explicit Polynomial(std::string polynomialStr = "", int maxDeg = 10, int varCount = 3);

	Polynomial(const Polynomial &);

	Polynomial &operator=(const Polynomial &);

	~Polynomial();

	void addMonom(std::string monomStr);

	Polynomial operator+(const Polynomial &rhs)
	{
		Polynomial res;

		if (maxDeg == rhs.maxDeg && varCount == rhs.varCount) {
			res = *this;
			*res.list = (*res.list) + (*rhs.list);
		}

		return res;
	}

	Polynomial  operator-(const Polynomial &rhs)
	{
		Polynomial res;

		if (maxDeg == rhs.maxDeg && varCount == rhs.varCount) {
			res = *this;
			*res.list = (*res.list) - (*rhs.list);
		}

		return res;
	}

	Polynomial  operator*(const Polynomial &rhs)
	{
		Polynomial res;

		if (maxDeg == rhs.maxDeg && varCount == rhs.varCount) {
			res = *this;
			*res.list = res.list->multiply(*rhs.list, maxDeg, varCount);
		}

		return res;
	}


	std::string toString();
};
Polynomial::Polynomial(std::string polynomialStr, int maxDeg, int varCount) {
	this->polynomialStr = polynomialStr;
	this->maxDeg = maxDeg;
	this->varCount = varCount;

	this->list = new CircleList();

	int count = 0;

	std::string *words = new std::string[this->polynomialStr.size() + 2];
	stringToWords(this->polynomialStr, words, count);

	for (int i = 0; i < count; i++) {
		this->list->AddMonom(
			stringToCoeff(words[i]),
			stringToConvolution(words[i], maxDeg, varCount)
			);
	}
}

Polynomial::Polynomial(const Polynomial & src) {
	this->polynomialStr = src.polynomialStr;
	this->maxDeg = src.maxDeg;
	this->varCount = src.varCount;

	this->list = new CircleList(*src.list);
}

Polynomial &Polynomial::operator=(const Polynomial &src) {
	this->polynomialStr = src.polynomialStr;
	this->maxDeg = src.maxDeg;
	this->varCount = src.varCount;

	delete list;

	this->list = new CircleList(*src.list);
	return *this;
}

Polynomial::~Polynomial() {
	delete list;
}


void Polynomial::addMonom(std::string monomStr) {
	this->list->AddMonom(
		stringToCoeff(monomStr),
		stringToConvolution(monomStr, maxDeg, varCount)
		);
}

std::string Polynomial::toString() {
	return this->list->CircleToString(maxDeg, varCount);
}

void Polynomial::stringToWords(std::string st, std::string *words, int &k) {

	std::string delimiters = "+-* ";
	std::string tmp = st + " ";
	words[0] = "";

	for (int i = 0; i < (tmp.size()); i++)
	{
		if ((delimiters.find(tmp[i]) < 0) || (delimiters.find(tmp[i]) > delimiters.size()))
		{
			words[k] = words[k] + tmp[i];
		}
		else if (tmp[i] == ' ')
		{
			if (words[k].size() > 0)
			{
				if (words[k] != "-")
				{
					words[++k] = "";
				}
			}
		}
		else
		{
			if (tmp[i] == '-')
			{
				if (words[k] != "")
				{
					k++;
					words[k] = tmp[i];
				}
				else
				{
					words[k] = tmp[i];
				}
				
			}
			if (tmp[i] == '+')
			{
				if (words[k] != "")
				{
					k++;
				}
				
			}
		}
	}
}

int Polynomial::stringToCoeff(std::string str) {
	if (str.empty()) {
		return 0;
	}

	int start = 0;

	if (str[0] == '-') {
		start = 1;
	}

	if (str[start] == 'x') {
		return start == 0 ? 1 : -1;
	}

	if (str[start] >= '0' && str[start] <= '9') {
		std::string num;

		for (int i = start; i < str.length() && str[i] >= '0' && str[i] <= '9'; i++) {
			num += str[i];
		}

		int res = std::stoi(num);

		if (start == 1) {
			res *= -1;
		}

		return res;
	}

	return 0;
}

int Polynomial::stringToConvolution(std::string _str, int maxSt, int k) {
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
