#include "circle.h"

circle::circle()
{

}
//�����������
circle::circle(double r)
{
    this->r = r;
    d = 0;
}

double circle::getPerimeter() const
{
    return perimeter;
}

//��������� ������
void circle::workCircle()
{
    d = r * 2;
    area = 3.14 * pow(r, 2);
    perimeter = 3.14 * 2 * r;
}

//����� ��������
double circle::getD()
{
    return d;
}