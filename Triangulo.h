#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

using namespace std;

class Triangulo
{
    public:
        Triangulo(double a, double b, double c);
        ~Triangulo();
        double getPerimetro() const;
        virtual double getArea() const;
        bool operator==(const Triangulo &t) const;
        bool operator!=(const Triangulo &t) const;
        bool operator>=(const Triangulo &t) const;
        bool operator<=(const Triangulo &t) const;
        bool operator>(const Triangulo &t) const;
        bool operator<(const Triangulo &t) const;
        
        friend ostream &operator<<(ostream &os, const Triangulo &t);

    protected:
        double lado_a, lado_b, lado_c;
};

#endif