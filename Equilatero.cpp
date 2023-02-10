#include <cmath>

#include "Equilatero.h"

Equilatero::Equilatero(double lado) : Triangulo(lado, lado, lado)
{
    
}

Equilatero::~Equilatero()
{
    
}

double Equilatero::getArea() const
{
    return ((sqrt(3)* pow(this->lado_a, 2))/4);
}

ostream& operator<<(ostream &os, const Equilatero &t)
{
    os << "Triangulo Equilatero" << endl;
    os << "Lado: " << t.lado_a << endl;
    os << "Perimetro: " << t.getPerimetro() << endl;
    os << "Area: " << t.getArea() << endl;   
}
