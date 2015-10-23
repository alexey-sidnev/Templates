#pragma once  // Только для Microsoft compiler

// Include guard
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

template <class Type>
class Complex {
 public:
  Type re_, im_;

  Complex()
  {
	  init(*this);
  }


  Complex(Type re, Type im): re_(re), im_(im)
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

template <class Type>
void init(Type& a)
{
	a=0;
}

template <class Type>
void init(Complex<Type>& a)
{
	init(a.im_);
	init(a.re_);
}

#endif  // COMPLEX_H
