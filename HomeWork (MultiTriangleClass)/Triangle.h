#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

// Класс Triangle, наследующий класс Figure
class Triangle : public Figure {
protected:
    double a, b, c; // Длины сторон
    double A, B, C; // Величины углов

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    void print_info() const override;
};

#endif // TRIANGLE_H