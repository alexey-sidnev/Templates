#pragma once

#ifndef SOLUTIONS_KIPARENKOIV_SRC_TESTS_H_
#define SOLUTIONS_KIPARENKOIV_SRC_TESTS_H_
#include "Sorter.h"

// Ãåíåðàöèÿ ýëåìåíòà ñëó÷àéíûì îáðàçîì
template <class Type>
void InitElement(Type *el) {
  *el = Type(rand());
}

// Ñïåöèàëèçàöèÿ äëÿ òèïà double
template<>
void InitElement<double>(double *el) {
  *el = (rand() / 2. - RAND_MAX) / (rand() + 1.);
}

// Ñïåöèàëèçàöèÿ äëÿ òèïà float
template<>
void InitElement<float>(float *el) {
  *el = (rand() / 2.f - RAND_MAX) / (rand() + 1.f);
}

// Ñïåöèàëèçàöèÿ äëÿ òèïà char
// Òîëüêî çàãëàâíûå àíãëèéñêèå áóêâû
template<>
void InitElement<char>(char *el) {
  *el = rand() % 26 + 65;
}

// Ãåíåðàöèÿ ýëåìåíòà ñëó÷àéíûì îáðàçîì òèïà Complex
template <class Type>
void InitElement(Complex<Type> *el) {
  Type re, im;
  InitElement(re);
  InitElement(im);
  *el = Complex<Type>(re, im);
}

// Èíèöèàëèçàöèÿ ìàññèâà ñëó÷àéíûì îáðàçîì
template <class Type>
void InitArray(Type *mas, int size) {
  for (int i = 0; i < size; ++i)
    InitElement(mas[i]);
}

// Âûâîä ìàññèâà íà ýêðàí
template <class Type>
void PrintArray(Type *mas, int size) {
  for (int i = 0; i < size; ++i)
    std::cout << "  [" << i << "]=" << mas[i] << std::endl;
}

// Ïðîâåðêà äëÿ çàäàííîãî òèïà
template <class Type>
void CheckSort(int size) {
  Type *mas = new Type[size];
  InitArray(mas, size);
  std::cout << "Check type: " << typeid(Type).name() << std::endl;
  std::cout << "Initial array:\n";
  PrintArray(mas, size);
  Sorter<Type>::sort(mas, size);
  std::cout << "Sorted array:\n";
  PrintArray(mas, size);
  std::cout << std::endl;
  delete[] mas;
}

#endif  // SOLUTIONS_KIPARENKOIV_SRC_TESTS_H_
