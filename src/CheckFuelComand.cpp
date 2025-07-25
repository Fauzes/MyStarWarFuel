#include "../inc/CheckFuelComand.h"
#include "../inc/CommandTypes.h"
#include "../inc/ComandExeption.h"
#include <iostream>

CheckFuelComand::CheckFuelComand(): ICommand()
{
    this->setType(checkFuel_cmd);
}

CheckFuelComand::~CheckFuelComand()
{
}

void CheckFuelComand::execute()
{
    if ((obj->getFuel() - obj->getFuelVelocity()) < 0)
    {
        throw ComandExeption("Error not fuel");
    }
}

void CheckFuelComand::setCheckObj(IFuelObject *obj)
{
    this->obj = obj;
}
