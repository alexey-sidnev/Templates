#pragma once  // Только для Microsoft compiler

// Include guard
#ifndef SOLUTIONS_ZHORIN_SRC_COMPLEX_H_
#define SOLUTIONS_ZHORIN_SRC_COMPLEX_H_

#include <iostream>

template <class Type>
class Complex {
 public:
  Type re_, im_;

  Complex(Type re = 0, Type im = 0): re_(re), im_(im)
  {}

  std::ostream& Print(std::ostream& o) const {
    o << "<"<< re_ << ", " << im_ << ">";
    return o;
  }

};

template <class Type>
std::ostream& operator<<(std::ostream& o, const Complex<Type>& instance) {
  return instance.Print(o);
}
#endif  // SOLUTIONS_ZHORIN_SRC_COMPLEX_H_
