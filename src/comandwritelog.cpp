#include "comandwritelog.h"
#include "CommandTypes.h"

ComandWriteLog::ComandWriteLog(): ICommand()
{
    setType(writeLog_cmd);
}

ComandWriteLog::ComandWriteLog(std::string str, LogCntr *loger)
{
    setType(writeLog_cmd);
    this->str = str;
    this->loger = loger;
}

void ComandWriteLog::execute()
{
    loger->write(str);
}
