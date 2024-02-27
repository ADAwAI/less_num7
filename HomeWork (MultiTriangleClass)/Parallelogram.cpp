#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {}

void Parallelogram::print_info() const {
    std::cout << "Параллелограмм:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << A << " D=" << B << "\n";
}