#pragma once  // Òîëüêî äëÿ Microsoft compiler

// Include guard
#ifndef SOLUTIONS_KIPARENKOIV_SRC_COMPLEX_H_
#define SOLUTIONS_KIPARENKOIV_SRC_COMPLEX_H_

#include <iostream>

template <class Type>
class Complex {
 public:
  Type re_, im_;

  Complex(Type re = 0, Type im = 0): re_(re), im_(im)
  {}

  std::ostream& Print(const std::ostream& o) const {
    o << "<"<< re_ << ", " << im_ << ">";
    return o;
  }
};

template <class Type>
std::ostream& operator<<(std::ostream& o, const Complex<Type>& instance) {
  return instance.Print(o);
}

#endif  // SOLUTIONS_KIPARENKOIV_SRC_COMPLEX_H_
