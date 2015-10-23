#include "Complex.h"

template <class Type>
class Sorter{
public:
	void static sort(Type*a,int n){
		for (int i=0; i<n;i++)
			for(int j=i+1;j<n;j++)
				if(MyCompare(a[i],a[j])){
					Type tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;

				}
	}
};

template<typename Type>
bool MyCompare(Type &a, Type &b){
	if(a>b)
		return true;
	return false;
}

template<class Type>
bool MyCompare(Complex<Type> &a, Complex<Type> &b){
	if(a.re_>b.re_)
		return true;
	if (a.re_==b.re_ && a.im_>b.im_)
		return true;
	return false;
}