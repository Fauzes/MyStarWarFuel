#ifndef __IRotetingObject__
#define __IRotetingObject__

#include <stdint.h>
#include "../inc/MyAngle.h"

class IRotetingObject
{
public:

    IRotetingObject();
    ~IRotetingObject();
    
    virtual void setAngle(MyAngle* value) = 0;
    virtual MyAngle* getAngle() = 0;

    virtual void setAngleVelocity(MyAngle* value) = 0;
    virtual MyAngle* getAngleVelocity() = 0;
};

#endif
