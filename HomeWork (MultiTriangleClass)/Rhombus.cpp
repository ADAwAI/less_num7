#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(double side, double A, double B)
    : Quadrilateral(side, side, side, side, A, B, A, B) {}

void Rhombus::print_info() const {
    std::cout << "Ромб:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << A << " D=" << B << "\n";
}