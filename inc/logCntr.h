#ifndef LogCntr_H
#define LogCntr_H

#include <iostream>
#include <vector>

using namespace std;


class LogCntr
{
public:
    LogCntr();
    ~LogCntr();
    void write(string text);
    string reade_line(int line);
    int getLineCount();

private:
    vector<string> log;
};

#endif // LogCntr_H
