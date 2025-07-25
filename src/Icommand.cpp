#include "../inc/ICommand.h"


ICommand::ICommand()
{
}

ICommand::~ICommand()
{
}

void ICommand::setType(int typeCmd)
{
    this->typeCmd = typeCmd;
}

int ICommand::getType()
{
    return typeCmd;
}
