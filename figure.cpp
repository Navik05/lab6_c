#include "figure.h"

//����� �������
double figure::Area()
{
    return area;
}

//���� ���� ������
void figure::setType(int e)
{
    type = e;
}

//����� ���� ������
int figure::getType()
{
    return type;
}

//����������
figure::~figure()
{

}

//�����������
figure::figure()
{
    area = 0;
    perimeter = 0;
}

int figure::type = 0;