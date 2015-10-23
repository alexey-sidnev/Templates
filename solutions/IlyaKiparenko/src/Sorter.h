
#include "Complex.h"





template<typename Type>
 int comp(Type& a,Type& b)
	{
		return a>b;
	}
  template <class Type>
	 int comp(Complex<Type>& a,Complex<Type>& b)
	{
		return (comp(a.im_,b.im_)||comp(a.re_,b.re_));
	}







template <class Type>
class Sorter
{public:
	static void sort(Type* mas,int size)
	{
		Type t;
		for(int i=0; i<size; i++)
		{
			for(int j=i+1; j<size; j++)
			{
				if(comp(mas[i],mas[j]))
				{
					t=mas[i];
					mas[i]=mas[j];
					mas[j]=t;
					
				}

			}
		}

	}
};

