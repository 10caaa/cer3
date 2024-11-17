#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Forme.h"
#include "Point.h"

class Rectangle : public Forme {
private:
    Point p1, p2;

public:
    Rectangle(const Point& point1, const Point& point2);
    double calculerAire() const override;
    double calculerPerimetre() const override;
    void dessiner() const override;
};

#endif // RECTANGLE_H
