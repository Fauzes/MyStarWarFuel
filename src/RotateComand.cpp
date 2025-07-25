#include "RotateComand.h"
#include "../inc/CommandTypes.h"

RotateComand::RotateComand(): ICommand()
{
    this->setType(rotate_cmd);
}

RotateComand::~RotateComand()
{
}

void RotateComand::execute()
{
    MyAngle tmp;

    tmp = *obj->getAngle() + *obj->getAngleVelocity();

    obj->setAngle(&tmp);
}

void RotateComand::setRotateObj(IRotetingObject *obj)
{
    this->obj = obj;
}
