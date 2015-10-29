#pragma once

#ifndef SOLUTIONS_PETROVAM_SRC_SORTER_H_
#define SOLUTIONS_PETROVAM_SRC_SORTER_H_
#include "Complex.h"

template <class Type>

bool myCompare(Type a, Type b) {
    if (a > b)
        return true;
    return false;
}

template <class Type>
bool myCompare(Complex<Type> a, Complex<Type> b) {
    if (a.re_ > b.re_)
        return true;
    if (a.re_ == b.re_)
      if (a.im_ > b.im_)
        return true;
    return false;
}

template <class Type>
bool myCompare(Complex<Complex<Type>> a, Complex<Complex<Type>> b) {
    if (myCompare(a.re_, b.re_))
        return true;
    if ((a.re_.re_ == b.re_.re_) && (a.re_.im_ == b.re_.im_)) {
        if (myCompare(a.im_, b.im_))
            return true;
    }
     return false;
}

template <class Type>
class Sorter {
 public:
    static void sort(Type *a, int size) {
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
                if (myCompare(a[i], a[j])) {
                    Type tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
    }
};
#endif  //  SOLUTIONS_PETROVAM_SRC_SORTER_H_
