#ifndef __MySpaceship__
#define __MySpaceship__

#include "../inc/IMovingObject.h"
#include "../inc/IRotatingObject.h"
#include "../inc/MyVector.h"
#include "../inc/MyAngle.h"
#include "../inc/IFuelObject.h"

class MySpaceship : public IMovingObject, public IRotetingObject, public IFuelObject
{
private:
    MyVector myLocation;
    MyVector myVelocity;

    MyAngle myAngle;
    MyAngle myAngleVelocity;

    int fuel;
    int fuelVelocity;

public:
    MySpaceship ();
    MySpaceship (MyVector* location, MyVector *velocity);
    MySpaceship (MyAngle* ang, MyAngle* angVelocity);
    ~MySpaceship();

    void setLocation(MyVector* value) override;
    MyVector* getLocation() override;

    void setVelocity(MyVector* value) override;
    MyVector* getVelocity() override;

    void setAngle(MyAngle* value) override;
    MyAngle* getAngle() override;

    void setAngleVelocity(MyAngle* value) override;
    MyAngle* getAngleVelocity() override;

    void setFuel(int fuel) override;
    int getFuel() override;

    int getFuelVelocity() override;
    void setFuelVelocity(int fuel) override;
};

#endif
