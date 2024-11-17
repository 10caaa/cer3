#ifndef CERCLE_H
#define CERCLE_H

#include "Forme.h"
#include "Point.h"

class Cercle : public Forme {
private:
    Point centre;
    double rayon;

public:
    Cercle(const Point& c, double r);
    double calculerAire() const override;
    double calculerPerimetre() const override;
    void dessiner() const override;
};

#endif // CERCLE_H
