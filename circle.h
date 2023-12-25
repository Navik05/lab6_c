#pragma once
#include "figure.h"

class circle : public figure
{
    double r;
    double d;
public:
    circle();
    circle(double r);
    virtual double getPerimeter() const override;
    void workCircle();
    double getD();
};