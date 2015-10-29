#include "Complex.h"
#include "tests.h"
#include <stdlib.h>
#include <iostream>
#include <stdint.h>

int main() {
  srand(666);

  CheckSort<int16_t>(10);
  CheckSort<int>(10);
  CheckSort<char>(10);
  CheckSort<float>(10);
  CheckSort<double>(10);
  CheckSort<Complex<float>>(10);
  CheckSort<Complex<int>>(10);
  CheckSort<Complex<Complex<float>>>(10);

  return 0;
}
