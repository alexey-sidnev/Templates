
#ifndef SOLUTIONS_KIPARENKOIV_SRC_SORTER_H_
#define SOLUTIONS_KIPARENKOIV_SRC_SORTER_H_

#include "Complex.h"

template<typename Type>
int comp(const Type& a, const Type& b) {
  return a > b;
}
template <class Type>
int comp(const Complex<Type>& a, const Complex<Type>& b) {
  return (comp(a.re_, b.re_));
}

template <class Type>
class Sorter {
 public:
  static void sort(Type* mas, int size) {
    Type t;
    for (int i = 0; i < size; i++) {
      for (int j = i+1; j < size; j++) {
	if (comp(mas[i], mas[j])) {
          t = mas[i];
          mas[i] = mas[j];
          mas[j] = t;
        }
       }
      }
    }
  }
};

#endif  // SOLUTIONS_KIPARENKOIV_SRC_SORTER_H_
