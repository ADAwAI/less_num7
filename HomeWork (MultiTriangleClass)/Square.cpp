#include "Square.h"
#include <iostream>

Square::Square(double side)
    : Quadrilateral(side, side, side, side, 90, 90, 90, 90) {}

void Square::print_info() const {
    std::cout << "Квадрат:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=90 B=90 C=90 D=90\n";
}