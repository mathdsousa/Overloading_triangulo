#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

using namespace std;

#include "Triangulo.h"

class Retangulo : public Triangulo
{
    public:
        Retangulo(double cateto1, double cateto2, double hipotenusa);
        ~Retangulo();
        double getArea() const;

        friend ostream &operator<<(ostream &os, const Retangulo &t);
    private:

};

#endif