#include "MacroComand.h"
#include "../inc/CommandTypes.h"

MacroComand::MacroComand()
{
    setType(macroCmd_type);
}

MacroComand::~MacroComand()
{
}

void MacroComand::execute()
{
    while (macroCmdList.size())
    {
        macroCmdList.front()->execute();

        macroCmdList.pop();
    }
    
}

void MacroComand::addCmd(ICommand *cmd)
{
    macroCmdList.push(cmd);
}
