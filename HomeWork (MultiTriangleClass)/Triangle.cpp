#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {}

void Triangle::print_info() const {
    std::cout << "�����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n";
}