#ifndef COMANDWRITELOG_H
#define COMANDWRITELOG_H

#include <iostream>
#include "ICommand.h"
#include "logCntr.h"

class ComandWriteLog : public ICommand
{
public:
    ComandWriteLog();
    ComandWriteLog(std::string str, LogCntr* loger);

    void execute() override;

private:
    std::string str;
    LogCntr* loger;
};

#endif // COMANDWRITELOG_H
