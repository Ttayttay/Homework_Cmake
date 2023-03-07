#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : Figure(3, "Треугольник")
    , sides {a, b, c}
    , angles{A, B, C}
    {}

void Triangle::printInfo() {

    Figure::printInfo();

    std::cout << "Стороны:\t";
    getSides();

    std::cout << "\nУглы:\t";
    getAngles();

    std::cout << "\n\n";
}    

void Triangle::getSides()
{
    int i = 0;
    for(char c='a'; c <= 'c'; ++c && ++i)
        std::cout << c << "=" << sides[i] << " ";
}

void Triangle::getAngles()
{
    int i = 0;
    for(char c='A'; c <= 'C'; ++c && ++i)
        std::cout << c << "=" << angles[i] << " ";
}