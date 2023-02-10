#include <cmath>

#include "Retangulo.h"

Retangulo::Retangulo(double cateto1, double cateto2, double hipotenusa) : Triangulo(cateto1, cateto2, hipotenusa)
{
    
}

Retangulo::~Retangulo()
{
    
}

double Retangulo::getArea() const
{
    return ((this->lado_a * this->lado_b) / 2)
}

ostream& operator<<(ostream &os, const Retangulo &t)
{
    os << "Triangulo Retangulo" << endl;
    os << "Cateto 1: " << t.lado_a << endl;
    os << "Cateto 2: " << t.lado_b << endl;
    os << "Hipotenusa: " << t.lado_c << endl;
    os << "Perimetro: " << t.getPerimetro() << endl;
    os << "Area: " << t.getArea() << endl;
}
