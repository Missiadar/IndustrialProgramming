#pragma once
#include <iostream>
#include "cone.h"
using namespace std;

class Conoid : public Cone{
private:
    double smallRadius;
public:
    Conoid();
    Conoid(double rBig, double rSmall, double h);
    Conoid(double rBig, double rSmall, double h, double x, double y, double z);
    void setRadius(double rBig, double rSmall);
    double area();
    double volume();
    bool isEqual(Conoid obj);
    friend ostream& operator<<(ostream& stream, Conoid obj);
    friend istream& operator>>(istream& istream, Conoid& obj);
};

