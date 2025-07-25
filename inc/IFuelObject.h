#ifndef __IFuelObject__
#define __IFuelObject__

#include <stdint.h>

class IFuelObject
{
public:
    IFuelObject();
    ~IFuelObject();

    virtual int getFuel() = 0;
    virtual void setFuel(int fuel) = 0;

    virtual int getFuelVelocity() = 0;
    virtual void setFuelVelocity(int fuel) = 0;
};

#endif
