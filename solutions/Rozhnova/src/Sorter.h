#pragma once

#ifndef SOLUTIONS_ROZHNOVA_SRC_SORTER_H_
#define SOLUTIONS_ROZHNOVA_SRC_SORTER_H_

template <class Type>
class Sorter {
 public:
    static void sort(Type* mas, int size) {
        Type tmp = 0;
        int i, j;
        for (i = 0; i < size; i++) {
            for (j = i+1; j < size; j++) {
                if(compare (mas[j], mas[i])) {
                tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
                }
            }
        }
    }
};


template <class Type>
int compare(Type a, Type b) {
    if (a < b)
        return 1;
    return 0;
}

template <class Type>
int compare(Complex<Type> a, Complex <Type> b) {
    if (a.re_ < b.re_ ) return 1;
    else
        if ((a.re_ == b.re_) && (a.im_ < b.im_))
            return 1;
        else
            return 0;
}

#endif  // SOLUTIONS_ROZHNOVA_SRC_SORTER_H_
