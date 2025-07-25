#ifndef __MacroComand__H
#define __MacroComand__H

#include <iostream>
#include "../inc/ICommand.h"
#include <queue>


using namespace std;

class MacroComand: public ICommand
{
private:
    queue<ICommand*> macroCmdList;
public:
    MacroComand(/* args */);
    ~MacroComand();

    void execute() override;

    void addCmd(ICommand* cmd);
};


#endif 
