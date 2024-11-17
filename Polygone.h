#ifndef POLYGONE_H
#define POLYGONE_H

#include "Forme.h"
#include "Point.h"
#include <vector>

class Polygone : public Forme {
protected:
    std::vector<Point> sommets;

public:
    Polygone(const std::vector<Point>& points);
    double calculerAire() const override;
    double calculerPerimetre() const override;
    void dessiner() const override;
};

#endif // POLYGONE_H
