#ifndef __MyMoveComand__
#define __MyMoveComand__

#include <stdint.h>
#include "../inc/IMovingObject.h"
#include "../inc/MyVector.h"
#include "../inc/ICommand.h"

class MoveComand: public ICommand
{
private:
    IMovingObject* obj;
public:
    MoveComand();
    ~MoveComand();
    void execute() override;
    void setMoveObj(IMovingObject* obj);
};

#endif
