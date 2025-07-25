// #include "../inc/MoveComand.h"

#include "../inc/MySpaceship.h"
#include "../inc/MyVector.h"
#include "../inc/MoveComand.h"
#include "../inc/CommandTypes.h"

MoveComand::MoveComand(): ICommand()
{
    this->setType(move_cmd);
}

MoveComand::~MoveComand()
{
}

void MoveComand::execute()
{
    MyVector tmp;

    tmp = *obj->getLocation() + obj->getVelocity();

    obj->setLocation(&tmp);
}

void MoveComand::setMoveObj(IMovingObject* obj)
{
    this->obj = obj;
}
