#include "MyAngle.h"

MyAngle::MyAngle()
{
}

MyAngle::MyAngle(MyAngle *obj)
{
    this->angle = obj->angle;
}

MyAngle::~MyAngle()
{
}

void MyAngle::setAngle(double ang)
{
    angle = ang;
}

double MyAngle::getAngle()
{
    return angle;
}

MyAngle MyAngle::operator+(MyAngle obj)
{
    MyAngle tmp;

    double result = getAngle() + obj.getAngle();

    if (result > 360)
    {
        result -= 360;
    }

    tmp.setAngle(result);

    return tmp;
}
