#pragma once

#ifndef SOLUTIONS_ROZHNOVA_SRC_SORTER_H_
#define SOLUTIONS_ROZHNOVA_SRC_SORTER_H_

template <class Type>
class Sorter {
 public:
    static void sort(Type* mas, int size) {
        int i, j;
        for (i = 0; i < size; i++) {
            for (j = i+1; j < size; j++) {
                if (compare(mas[j], mas[i])) {
               Type tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
                }
            }
        }
    }
};


template <class Type>
int compare(const Type &a, const Type &b) {
    if (a < b)
        return 1;
    return 0;
}

template <class Type>
int compare(const Complex<Type> &a, const Complex <Type> &b) {
    if (a.re_ < b.re_ )
        return 1;
    if ((a.re_ == b.re_) && (a.im_ < b.im_))
        return 1;
    return 0;
}

template <class Type>
int compare(const Complex<Complex<Type>> &a,
    const Complex<Complex<Type>> &b) {
    if (compare(a.re_, b.re_))
        return 1;
    if ((a.re_.re_ == b.re_.re_) && (a.re_.im_ == b.re_.im_)
            && (compare(a.im_, b.im_)))
            return 1;
    return 0;
}

#endif  // SOLUTIONS_ROZHNOVA_SRC_SORTER_H_