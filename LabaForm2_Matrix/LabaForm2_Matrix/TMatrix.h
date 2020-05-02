#include "stdafx.h"
#include "TVector.h"

template <class N>
class TMatrix
{
private:
	int size;
	TVector<N> * matr;
public:
	TMatrix<N>(int _size = 0)
	{
		size = _size;
		matr = new TVector<N>[size];
		for(int i=0;i<size;i++)
		{
			matr[i] = TVector<N>(size-i,i);
		}
	}
	~TMatrix<N>() 
	{
		//delete[] matr;
	}
	TMatrix<N>(const TMatrix<N>& mt)
	{
		size = mt.size;
		matr = mt.matr;
	}
	TVector<N>& operator[](int k)
	{
		return matr[k];
	}
	TMatrix<N>& operator=(const TMatrix<N>& mt)
	{
		size = mt.size;
	    matr = mt.matr;		
		return *this;
	}
	TMatrix<N> operator+(TMatrix<N> mt)
	{
		TMatrix<N> res(size);
		//res.matr = matr + mt.matr;
		if(size!=mt.size)
			return TMatrix<N>(0);
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				res.matr[i][j] = matr[i][j] + mt.matr[i][j];
			}
		}
		return res;
	}
	TMatrix<N> operator-(TMatrix<N> mt)
	{
		TMatrix<N> res(size);
		//res.matr = matr - mt.matr;
		if(size!=mt.size)
			return TMatrix<N>(0);
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				res.matr[i][j] = matr[i][j] - mt.matr[i][j];
			}
		}
		return res;
	}
	TMatrix<N> operator*(const TMatrix<N>& mt)
	{
		if(size!=mt.size)
			return TMatrix<N>(0);
		TMatrix<N> res(mt.size);
		for(int i=0;i<size;i++)
		{
			for(int j=i;j<size;j++)
			{
				N tmp(0);
				for(int k=i;k<size;k++)
				{
					tmp += matr[i][k]*mt.matr[k][j];
				}
				res.matr[i][j] = tmp;
			}
		}
		return res;
	}
	int getSize()
	{
		return size;
	}
};