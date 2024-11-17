#include "Carre.h"
#include <iostream>

Carre::Carre(const Point& p1, double cote)
    : Rectangle(p1, Point(p1.x + cote, p1.y + cote)) {}

void Carre::dessiner() const {
    std::cout << "Dessiner un carre" << std::endl;
}
