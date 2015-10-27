#pragma once

#ifndef SOLUTIONS_ANNAKABALOVA_SRC_SORTER_H_
#define SOLUTIONS_ANNAKABALOVA_SRC_SORTER_H_
template <class Type>
bool comp(Type a1, Type a2) {
  if (a1>a2) 
   return true;
  else 
   return false;
}

template <class Type>
bool rav(Complex<Type> a1, Complex<Type> a2) {
 if ((a1.re_ == a2.re_) && (a1.im_ == a2.im_)) 
  return true;
 else 
  return false;
}

template <class Type>
bool comp(Complex<Type> a1, Complex<Type> a2) {
 if (a1.re_>a2.re_) 
  return true;
 else 
  if (a1.re_==a2.re_)
   if (a1.im_>a2.im_)
	 return true;
  return false;
}

template <class Type>
bool comp(Complex<Complex<Type>> a1, Complex<Complex<Type>> a2)
{
 if (comp(a1.re_, a2.re_))
  return true;
 else
  if (rav(a1.re_, a2.re_))
   if (comp(a1.im_, a2.im_))
    return true;
  return false;
}

template <class Type>
class Sorter {
 public:
  void static sort(Type* a,int n) {
   for (int i=0;i<n;i++)
    for (int j=i+1;j<n;j++)
     if (comp(a[i],a[j])) {
      Type tmp;
      tmp=a[i];
      a[i]=a[j];
      a[j]=tmp;
     }
  };
};

#endif  //SOLUTIONS_ANNAKABALOVA_SRC_SORTER_H_