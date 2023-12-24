#pragma once
#include "figure.h"

class square : public figure
{
    double a;
    double diagonal;
public:
    square();
    square(double a);
    double Area() override;
    double getDiagonal();
};