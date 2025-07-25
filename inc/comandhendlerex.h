#ifndef COMANDHENDLEREX_H
#define COMANDHENDLEREX_H

#include "ICommand.h"
#include <exception>
#include <queue>
#include "logCntr.h"

class ComandHendlerEx : public ICommand
{
public:
    ComandHendlerEx();
    ComandHendlerEx(std::queue<ICommand*>* cmd_list, ICommand* cmd, const std::exception* ex, LogCntr* loger);

    void execute() override;
private:

    std::exception* ex;
    ICommand* cmd;
    std::queue<ICommand*>* cmd_list;
    LogCntr* loger;
};

#endif // COMANDHENDLEREX_H
