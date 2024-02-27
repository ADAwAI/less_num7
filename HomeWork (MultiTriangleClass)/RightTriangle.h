#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

// Класс RightTriangle, наследующий класс Triangle
class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b);
    void print_info() const override;
};

#endif