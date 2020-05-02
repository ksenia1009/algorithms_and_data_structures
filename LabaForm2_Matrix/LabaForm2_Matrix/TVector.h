#include "stdafx.h"

template <class M>
class TVector
{
private:
	M* mem;
	int size;
	int startind;
public:
	TVector<M>(int _size = 0, int _startind = 0)
	{
		M nul(0);
		size = _size;
		startind = _startind;
		mem = new M[size];
		for(int i=0;i<size;i++)
		{
			mem[i] = nul;
		}
	}
	TVector<M>(const TVector<M>& v)
	{
		size = v.size;
		mem = new M[size];
		for(int i=0;i<size;i++)
		{
			mem[i] = v.mem[i];
		}
	}
	~TVector<M>()
	{
		delete[] mem;
	}
	TVector<M>& operator=(const TVector<M>& v)
	{
		if(size!=v.size)
		{
			if(size!=0)
			{
				delete[] mem;
			}
			size = v.size;
			mem = new M[size];		
			startind = v.startind;
		}
		for(int i=0;i<size;i++)
		{
			mem[i] = v.mem[i];
		}
		return *this;
	}
	M& operator[](int k)
	{
		M noll(0);
		if(k<startind)
			return noll;
		else
			return *(mem+k-startind);
	}
	M& operator*(const TVector<M>& v)
	{
		M res(0);
		if(size!=v.size)
			return res;
		for(int i=0;i<size;i++)
		{
			res = res + mem[i] * v.mem[i];
		}
		return res;
	}
	TVector<M> operator+(const TVector<M>& v)
	{
		TVector<M> res(0);
		if(size!=v.size)
			return res;
		res = *this;
		for(int i=0;i<size;i++)
		{
			res.mem[i] = res.mem[i] + v.mem[i];
		}
		return res;
	}
	TVector<M> operator-(const TVector<M>& v)
	{
		TVector<M> res(0);
		if(size!=v.size)
			return res;
		res = *this;
		for(int i=0;i<size;i++)
		{
			res.mem[i] = res.mem[i] - v.mem[i];
		}
		return res;
	}
	int getSize()
	{
		return size;
	}
};