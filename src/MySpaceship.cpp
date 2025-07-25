#include "../inc/MySpaceship.h"
#include <iostream>


MySpaceship::MySpaceship() : IMovingObject()
{
  
}

MySpaceship::MySpaceship(MyVector* location, MyVector* velocity) : IMovingObject()
{
    myLocation = *location;
    myVelocity = *velocity;
}

MySpaceship::MySpaceship(MyAngle *ang, MyAngle *angVelocity)
{
    myAngle = *ang;
    myAngleVelocity = *angVelocity;
}

MySpaceship::~MySpaceship()
{
    
}

void MySpaceship::setLocation(MyVector* value)
{
        myLocation = *value;
}

MyVector* MySpaceship::getLocation()
{
    if (myLocation.count_measurement())
    {
        return &myLocation;
    }

    throw std::invalid_argument("invalid coordinates");

    return nullptr;    
}

void MySpaceship::setVelocity(MyVector* value)
{
    myVelocity = *value;
}

MyVector* MySpaceship::getVelocity()
{
    if (myVelocity.count_measurement())
    {
        return &myVelocity;
    }

    throw std::invalid_argument("invalid coordinates");

    return nullptr;
}

void MySpaceship::setAngle(MyAngle *value)
{
    myAngle = *value;
}

MyAngle *MySpaceship::getAngle()
{
    return &myAngle;
}

void MySpaceship::setAngleVelocity(MyAngle *value)
{
    myAngleVelocity = *value;
}

MyAngle *MySpaceship::getAngleVelocity()
{
    return &myAngleVelocity;
}

void MySpaceship::setFuel(int fuel)
{
    this->fuel = fuel;
}

int MySpaceship::getFuel()
{
    return fuel;
}

int MySpaceship::getFuelVelocity()
{
    return fuelVelocity;
}

void MySpaceship::setFuelVelocity(int fuel)
{
    fuelVelocity = fuel;
}
