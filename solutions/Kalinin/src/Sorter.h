#include "Complex.h"

template <class Type>

int compare(Type a, Type b)
{
	if (a>b)
		return 1;
	else
		return 0;
}

template <class Type>
int compare(Complex<Type> a, Complex<Type> b)
{
	if (a.re_>b.re_)
		return 1;
	else
		if (a.re_==b.re_)
			{
				if (a.im_>b.im_)
					return 1;
				else
					return 0;
			}
		else
			return 0;
}

template <class Type>

class Sorter
{
public:
	static void sort( Type* mas, int size)
	{
		for (int j=0; j<size; j++)
			for (int i=0; i<size-1; i++)
				if (compare(mas[i],mas[i+1])==1)
				{
					Type tmp=mas[i];
					mas[i]=mas[i+1];
					mas[i+1]=tmp;
				}

	}

};
