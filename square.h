#pragma once
#include "figure.h"

class square : public figure
{
    double a;
    double diagonal;
public:
    square();
    square(double a);
    virtual double getPerimeter() const override;
    void workSquare();
    double getDiagonal();
};