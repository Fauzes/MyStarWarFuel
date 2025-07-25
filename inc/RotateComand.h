#ifndef __MyRotateComand__
#define __MyRotateComand__

#include <stdint.h>
#include "../inc/IRotatingObject.h"
#include "../inc/MyAngle.h"
#include "../inc/ICommand.h"

class RotateComand: public ICommand
{
private:
    IRotetingObject* obj;
public:
    RotateComand();
    ~RotateComand();
    void execute() override;
    void setRotateObj(IRotetingObject* obj);
};

#endif
