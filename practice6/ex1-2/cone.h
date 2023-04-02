#pragma once
#include <iostream>
using namespace std;

class Cone {
protected:
    const double pi = 3.14159265;
    double x, y, z;
    double radius;
    double height;
public:
    Cone();
    Cone(double r, double h);
    Cone(double r, double h, double x, double y, double z);
    void setCoordinate(double x, double y, double z);
    virtual void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    virtual double area();
    virtual double volume();
    virtual bool isEqual(Cone obj);
    friend ostream& operator<<(std::ostream& stream, Cone obj);
};

