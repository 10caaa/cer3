#include "Cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(const Point& c, double r) : centre(c), rayon(r) {}

double Cercle::calculerAire() const {
    return M_PI * rayon * rayon;
}

double Cercle::calculerPerimetre() const {
    return 2 * M_PI * rayon;
}

void Cercle::dessiner() const {
    std::cout << "Dessiner un cercle de rayon " << rayon << " au centre (" 
              << centre.x << ", " << centre.y << ")" << std::endl;
}
