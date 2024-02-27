#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

// Класс Square, наследующий класс Quadrilateral
class Square : public Quadrilateral {
public:
    Square(double side);
    void print_info() const override;
};

#endif // SQUARE_H