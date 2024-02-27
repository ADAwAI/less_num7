#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

// Класс IsoscelesTriangle, наследующий класс Triangle
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b);
    void print_info() const override;
};

#endif