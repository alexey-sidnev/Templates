#include "Complex.h"
#include "tests.h"
#include <stdlib.h>
#include <iostream>

template<class Type>
void co(Type a,int n)
{
	Complex<Type> b;
	if(n>0)  co(b,n-1);
	else cs(b);
}

template<class Type>
Complex<Type>cs(Type a)
{
	CheckSort<Type>(10);
}




int main() {
  srand(666);
  int u=1;
  co<int>(u,1);
  //  std::cout << typeid(co<int>(u,1)).name;
  CheckSort<short int>(10);
  CheckSort<int>(10);
  CheckSort<char>(10);
  CheckSort<float>(10);
  CheckSort<double>(10);
  CheckSort<Complex<float>>(10);
  CheckSort<Complex<int>>(10);
  CheckSort<Complex<Complex<float>>>(10);
  CheckSort<Complex<Complex<Complex<int>>>>(10);
  //CheckSort<typeid(co(5)).<int>>(10);

  return 0;
}
