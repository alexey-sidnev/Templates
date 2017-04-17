#pragma once
#include "Complex.h"
template <class Type>
class Sorter
{
public:
	void static sort(Type*a,int n)
	{
		for(int i=0; i<n; i++)
			for(int j=i+1; j<n; j++)
				if(Compare(a[i],a[j]))
				{
					Type tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
	};
};

template <typename Type>
bool Compare(Type &a, Type &b)
{
	if (a>b)
		return true;
	else
	return false;
}

template<class Type>
bool Compare(Complex<Type> &a, Complex<Type> &b)
{
	if(a.re_>b.re_)
		return true;
	else 
	if(a.re_==b.re_)
		if (a.im_>b.im_)
			return true;
	return false;
}
