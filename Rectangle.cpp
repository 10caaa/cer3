#include "Rectangle.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle(const Point& point1, const Point& point2)
    : p1(point1), p2(point2) {}

double Rectangle::calculerAire() const {
    return std::abs((p2.x - p1.x) * (p2.y - p1.y));
}

double Rectangle::calculerPerimetre() const {
    return 2 * (std::abs(p2.x - p1.x) + std::abs(p2.y - p1.y));
}

void Rectangle::dessiner() const {
    std::cout << "Dessiner un rectangle avec sommets (" << p1.x << ", " << p1.y
              << ") et (" << p2.x << ", " << p2.y << ")" << std::endl;
}
