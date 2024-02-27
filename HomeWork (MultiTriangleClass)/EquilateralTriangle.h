#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"

// Класс EquilateralTriangle, наследующий класс Triangle
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side);
    void print_info() const override;
};

#endif