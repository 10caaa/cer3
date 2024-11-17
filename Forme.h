#ifndef FORME_H
#define FORME_H

class Forme {
public:
    virtual double calculerAire() const = 0;
    virtual double calculerPerimetre() const = 0;
    virtual void dessiner() const = 0;
    virtual ~Forme() {}
};

#endif // FORME_H
