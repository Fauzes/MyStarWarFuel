#include "../inc/BurnFueldComand.h"

BurnFueldComand::BurnFueldComand()
{
}

BurnFueldComand::~BurnFueldComand()
{
}

void BurnFueldComand::execute()
{
    obj->setFuel(obj->getFuel() - obj->getFuelVelocity());
}

void BurnFueldComand::setObj(IFuelObject *obj)
{
    this->obj = obj;
}
