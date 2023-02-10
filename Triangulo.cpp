#include <cmath>

#include "Triangulo.h"

Triangulo::Triangulo(double a, double b, double c) : lado_a(a), lado_b(b), lado_c(c)
{
    
}

Triangulo::~Triangulo()
{
    
}

double Triangulo::getPerimetro() const
{
    return lado_a + lado_b +lado_c;
}

double Triangulo::getArea() const
{
    double semiPerimetro = this->getPerimetro() / 2;
    double area = sqrt(semiPerimetro * (semiPerimetro - lado_a ) * (semiPerimetro - lado_b ) * (semiPerimetro - lado_c ));
    return area;
}

bool Triangulo::operator==(const Triangulo &t) const
{
    return (this->getArea() - t.getArea() == 0);
}

bool Triangulo::operator!=(const Triangulo &t) const
{
    return (this->getArea() - t.getArea() != 0);
}

bool Triangulo::operator>=(const Triangulo &t) const
{
    return (this->getArea() - t.getArea() >= 0);
}

bool Triangulo::operator<=(const Triangulo &t) const
{
    return (this->getArea() - t.getArea() <= 0);
}

bool Triangulo::operator>(const Triangulo &t) const
{
    return (this->getArea() - t.getArea() > 0);
}

bool Triangulo::operator<(const Triangulo &t) const
{
    return (this->getArea() - t.getArea() < 0);
}

ostream& operator<<(ostream &os, const Triangulo &t)
{
    os << "Triangulo" << endl;
    os << "Lados: " << t.lado_a << ", " << t.lado_b << ", " << t.lado_c << endl;
    os << "Perimetro: " << t.getPerimetro() << endl;
    os << "Area: " << t.getArea() << endl;
    return os;
}