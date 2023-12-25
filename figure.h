#pragma once
#define N 3
#include <math.h>

class figure
{
protected:
    double area;
    double perimeter;
    static int type;
public:
    double Area();
    virtual double getPerimeter() const = 0;
    static void setType(int e);
    static int getType();
    figure();
    ~figure();
};