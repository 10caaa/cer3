#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(const Point& point1, const Point& point2, const Point& point3)
    : p1(point1), p2(point2), p3(point3) {}

double Triangle::calculerAire() const {
    return std::abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0);
}

double Triangle::calculerPerimetre() const {
    double a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    double b = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
    double c = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
    return a + b + c;
}

void Triangle::dessiner() const {
    std::cout << "Dessiner un triangle" << std::endl;
}
