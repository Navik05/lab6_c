#include "square.h"

square::square()
{

}
//�����������
square::square(double a)
{
    this->a = a;
    diagonal = 0;
}

double square::getPerimeter() const
{
    return perimeter;
}

//��������� ������
void square::workSquare()
{
    diagonal = sqrt(2) * a;
    area = pow(a, 2);
    perimeter = a * 4;
}

//����� ���������
double square::getDiagonal()
{
    return diagonal;
}