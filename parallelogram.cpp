#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle("Параллелограмм", a, b, c, d, A, B, C, D) {};
Parallelogram::Parallelogram(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(name, a, b, c, d, A, B, C, D) {};