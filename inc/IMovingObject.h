#ifndef __IMovingObject__
#define __IMovingObject__

#include <stdint.h>
#include "../inc/MyVector.h"

class IMovingObject
{
public:

    IMovingObject();
    ~IMovingObject();

    virtual void setLocation(MyVector* value) = 0;
    virtual MyVector* getLocation() = 0;

    virtual void setVelocity(MyVector* value) = 0;
    virtual MyVector* getVelocity() = 0;
};

#endif
