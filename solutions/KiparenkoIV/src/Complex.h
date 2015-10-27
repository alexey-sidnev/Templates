#pragma once  // Òîëüêî äëÿ Microsoft compiler

// Include guard
#ifndef SOLUTIONS_KIPARENKOIV_SRC_COMPLEX_H_
#define SOLUTIONS_KIPARENKOIV_SRC_COMPLEX_H_

#include <iostream>

template <class Type>
class Complex {
 public:
  Type re_, im_;

  explicit Complex(Type re = Type(0), Type im = Type(0)): re_(re), im_(im)
  {}

  template <class Type>
  std::ostream& operator<<(std::ostream& o, const Complex<Type>& instance) {
    o << "<"<< re_ << ", " << im_ << ">";
    return o;
  }
};



#endif  // SOLUTIONS_KIPARENKOIV_SRC_COMPLEX_H_
