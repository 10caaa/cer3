#ifndef CARRE_H
#define CARRE_H

#include "Rectangle.h"

class Carre : public Rectangle {
public:
    Carre(const Point& p1, double cote);
    void dessiner() const override;
};

#endif // CARRE_H
