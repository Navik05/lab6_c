#pragma once
#include "figure.h"

template<typename T1>
class circle : public figure
{
    T1 r;
    double d;
public:
    circle()
    {

    }

    circle(T1 r)
    {
        this->r = r;
        d = 0;
    }

    void workCircle()
    {
        d = r * 2;
        area = 3.14 * pow(r, 2);
        perimeter = 3.14 * 2 * r;
    }

    double getD()
    {
        return d;
    }
};