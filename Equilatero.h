#ifndef EQUILATERO_H
#define EQUILATERO_H

#include <iostream>

using namespace std;

#include "Triangulo.h"

class Equilatero : public Triangulo
{
    public:
        Equilatero(double lado);
        ~Equilatero();
        double getArea() const;

        friend ostream &operator<<(ostream &os, const Equilatero &t);

    private:
};


#endif