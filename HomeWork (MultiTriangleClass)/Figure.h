#ifndef FIGURE_H
#define FIGURE_H

// Базовый класс Figure
class Figure {
public:
    virtual void print_info() const = 0;
    virtual ~Figure() = default;
};

#endif // FIGURE_H