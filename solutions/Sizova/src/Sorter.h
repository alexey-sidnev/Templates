#pragma once 

#ifndef SOLUTIONS_SIZOVA_SRC_SORTER_H_
#define SOLUTIONS_SIZOVA_SRC_SORTER_H_

#include "Complex.h"

template <class Type>
class Sorter {
 public:
  void static sort(Type*a,int n)
  {
    for (int i = 0; i < n; i++)
    {
      Type min = a[i];
      int imin = i;
      for (int j = i + 1; j < n; j++)
      {
        if (Compare(min, a[j]))
        {
          min = a[j];
          imin = j;
        }
      }
      a[imin] = a[i];
      a[i] = min;
	}
  };
};

template <typename Type>
bool Compare(Type &a, Type &b)
{
  if (a > b)  
    return true;
  else
    return false;
}

template<class Type>
bool Compare(Complex<Type> &a, Complex<Type> &b)
{
  if (a.re_ > b.re_)
    return true;
  else   
    if (a.re_ == b.re_)
	  if (a.im_ > b.im_)
        return true;
  return false;  
}

template<class Type>
bool Equal(Complex<Type> &a, Complex<Type> &b)
{
  if ((a.re_ == b.re_) && (a.im_ == b.im_))
    return true;
  else
    return false;
}

template<class Type>
bool Compare(Complex<Complex<Type>> &a, Complex<Complex<Type>> &b)
{
  if (Compare(a.re_, b.re_))
    return true;
  else   
    if (Equal(a.re_, b.re_))
	  if (Compare(a.im_,b.im_))
        return true;
  return false;  
}

#endif  // SOLUTIONS_SIZOVA_SRC_SORTER_H_