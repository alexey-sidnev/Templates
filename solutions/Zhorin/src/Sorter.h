#pragma once

#ifndef SOLUTIONS_ZHORIN_SRC_SORTER_H_
#define SOLUTIONS_ZHORIN_SRC_SORTER_H_

#include "Complex.h"

template <class Type>
class Sorter{
 public:
  static void sort(Type*a, int n) {
    for (int i = 0; i < n; i++)
     for (int j = i + 1; j < n; j++)
      if (MyCompare(a[i], a[j])){
       Type tmp = a[i];
       a[i] = a[j];
       a[j] = tmp;
      }
  }
};

template<typename Type>
bool MyCompare(const Type &a, const Type &b) {
  if (a > b)
    return true;
  return false;
}

template<class Type>
bool MyCompare(const Complex<Type> &a, const Complex<Type> &b) {
  if (a.re_ > b.re_)
    return true;
  if (a.re_ == b.re_ && a.im_ > b.im_)
    return true;
  return false;
}

template<class Type>
bool Eq(const Complex<Type> &a, const Complex<Type> &b) {
  if (a.re_ == b.re_ && a.im_ == b.im_)
    return true;
  return false;
}

template<class Type>
bool MyCompare(const Complex<Complex<Type>> &a,
const Complex<Complex<Type>> &b) {
  if (MyCompare(a.re_, b.re_))
    return true;
  if (Eq(a.re_, b.re_) && MyCompare(a.im_, b.im_))
    return true;
  return false;
}

#endif  // SOLUTIONS_ZHORIN_SRC_SORTER_H_
