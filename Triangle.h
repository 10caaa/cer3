#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Forme.h"
#include "Point.h"

class Triangle : public Forme {
private:
    Point p1, p2, p3;

public:
    Triangle(const Point& point1, const Point& point2, const Point& point3);
    double calculerAire() const override;
    double calculerPerimetre() const override;
    void dessiner() const override;
};

#endif // TRIANGLE_H
