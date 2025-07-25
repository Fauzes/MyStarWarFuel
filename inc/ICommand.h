#ifndef __ICommand__
#define __ICommand__

class ICommand
{
private:
    int typeCmd;
public:
    ICommand();
    ~ICommand();

    virtual void execute() = 0;
    void setType(int typeCmd);
    int getType();
};

#endif
