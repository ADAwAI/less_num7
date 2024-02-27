#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

// Класс Parallelogram, наследующий класс Quadrilateral
class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b, double A, double B);
    void print_info() const override;
};

#endif // PARALLELOGRAM_H