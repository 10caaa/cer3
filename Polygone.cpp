#include "Polygone.h"
#include <iostream>
#include <cmath>

Polygone::Polygone(const std::vector<Point>& points) : sommets(points) {}

double Polygone::calculerAire() const {
    double aire = 0.0;
    int n = sommets.size();
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        aire += sommets[i].x * sommets[j].y - sommets[j].x * sommets[i].y;
    }
    return std::abs(aire) / 2.0;
}

double Polygone::calculerPerimetre() const {
    double perimetre = 0.0;
    int n = sommets.size();
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        perimetre += std::sqrt(
            std::pow(sommets[j].x - sommets[i].x, 2) + 
            std::pow(sommets[j].y - sommets[i].y, 2)
        );
    }
    return perimetre;
}

void Polygone::dessiner() const {
    std::cout << "Dessiner un polygone avec " << sommets.size() << " sommets." << std::endl;
}
