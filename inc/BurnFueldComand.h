#ifndef __BurnFueldComand__
#define __BurnFueldComand__

#include <stdint.h>
#include "../inc/ICommand.h"
#include "../inc/IFuelObject.h"

class BurnFueldComand: public ICommand
{
private:
    IFuelObject* obj;
public:
    BurnFueldComand();
    ~BurnFueldComand();

    void execute() override;
    void setObj(IFuelObject* obj);
};


#endif