#include "conoid.h"
#include <iostream>
#include <cmath>
using namespace std;

Conoid::Conoid() { 
    radius = smallRadius = height = x = y = z = 0.0;
}

Conoid::Conoid(double rBig, double rSmall, double h) {
    x = y = z = 0.0;
    radius = rBig;
    smallRadius = rSmall;
    height = h;
}

Conoid::Conoid(double rBig, double rSmall, double h, double x, double y, double z) {
    this->x = x; this->y = y; this->z = z;
    radius = rBig; smallRadius = rSmall; height = h;
}

void Conoid::setRadius(double rBig, double rSmall) {
    radius = rBig; smallRadius = rSmall;
}

double Conoid::area() {
    double l = sqrt(height * height + (radius - smallRadius) * (radius - smallRadius));
    return pi * l * (radius + smallRadius) + pi * radius * radius + pi * smallRadius * smallRadius;
}

double Conoid::volume() {
    return pi * height / 3 * (radius * radius + radius * smallRadius + smallRadius * smallRadius);
}

bool Conoid::isEqual(Conoid obj) {
    return (this->smallRadius == obj.smallRadius) && (this->Cone::isEqual(obj));
}

std::ostream& operator<<(std::ostream& stream, Conoid obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "R=" << obj.radius << " ";
    stream << "r=" << obj.smallRadius << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
}

std::istream& operator>>(std::istream& istream, Conoid& obj) {
    cout << "Координаты: ";
    cin >> obj.x >> obj.y >> obj.z;
    float rB, rS;
    cout << "Радиусы: ";
    cin >> rB >> rS;
    obj.radius = max(rB, rS);
    obj.smallRadius = min(rB, rS);
    cout << "Высота: ";
    cin >> obj.height;
    return istream;
}