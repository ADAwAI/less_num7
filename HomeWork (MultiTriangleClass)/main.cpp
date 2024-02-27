#include <iostream>
#include <string>
#include <cmath>
#include <vector>
//using namespace std;

// Подключение заголовочных файлов классов
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

// Функция main
int main() {
    setlocale(LC_ALL, "Russian");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20);
    IsoscelesTriangle isoscelesTriangle(10, 20);
    EquilateralTriangle equilateralTriangle(30);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    std::vector<Figure*> figures = { &triangle, &rightTriangle, &isoscelesTriangle, &equilateralTriangle, &quadrilateral, &rectangle, &square, &parallelogram, &rhombus };

    for (const Figure* fig : figures) {
        fig->print_info();
        std::cout << std::endl;
    }

    return 0;
}