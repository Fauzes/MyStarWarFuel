#ifndef __CheckFuelComand__
#define __CheckFuelComand__

#include "../inc/IFuelObject.h"
#include "../inc/ICommand.h"

class CheckFuelComand: public ICommand
{
private:
    IFuelObject* obj;
public:
    CheckFuelComand();
    ~CheckFuelComand();

    void execute() override;
    void setCheckObj(IFuelObject* obj);
};

#endif
