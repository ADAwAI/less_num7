#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Quadrilateral.h"

// Класс Rhombus, наследующий класс Quadrilateral
class Rhombus : public Quadrilateral {
public:
    Rhombus(double side, double A, double B);
    void print_info() const override;
};

#endif