#pragma once
#ifndef SOLUTIONS_CHAPYGIN_SRC_SORTER_H_
#define SOLUTIONS_CHAPYGIN_SRC_SORTER_H_

template<class T>
bool compare(T max, T min) { if (max > min) { return true; } return false; }

template<class T>
bool compare(Complex<T> max, Complex<T> min) {
  if (compare(max.re_, min.re_)) 
    return true;
  else if (compare(min.re_, max.re_)) 
    return false;
  else if (compare(max.im_, min.im_)) 
    return true;
return false;
}

template<class T>
class Sorter{
 public:
  static void sort(T* arr, int size) {
    for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++)
        if (compare(arr[i], arr[j])) {
          T temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
    }
  }
};

#endif  // SOLUTIONS_CHAPYGIN_SRC_SORTER_H_
