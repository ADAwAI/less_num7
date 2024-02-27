#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Figure.h"

// Класс Quadrilateral, наследующий класс Figure
class Quadrilateral : public Figure {
protected:
    double a, b, c, d; // Длины сторон
    double A, B, C, D; // Величины углов

public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_info() const override;
};

#endif // QUADRILATERAL_H