#include "comandhendlerex.h"
#include "CommandTypes.h"
#include "comandwritelog.h"


ComandHendlerEx::ComandHendlerEx(): ICommand()
{
    setType(exeptionHendler_cmd);
}

ComandHendlerEx::ComandHendlerEx(std::queue<ICommand *> *cmd_list, ICommand *cmd, const std::exception* ex, LogCntr *loger): ICommand()
{
    this->ex = (std::exception*) ex;
    this->cmd = cmd;
    this->cmd_list = cmd_list;
    this->loger = loger;

    setType(exeptionHendler_cmd);
}

void ComandHendlerEx::execute()
{
    if (cmd->getType() == checkFuel_cmd)
    {
        ComandWriteLog* write_cmd = new ComandWriteLog(ex->what(), loger);

        cmd_list->push(write_cmd);
    }
}
