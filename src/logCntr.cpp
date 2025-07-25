#include "logCntr.h"

LogCntr::LogCntr()
{
    // ofstream log_file;

    // this->log_file_name = log_file_name;

    // log_file.open(log_file_name, ios_base::trunc);

    // if (!log_file.is_open())
    // {
    //     cerr << "Errr";
    // }

    // log_file.close();
}

LogCntr::~LogCntr()
{

}

void LogCntr::write(string text)
{
    // ofstream log_file;

    // log_file.open(log_file_name, ios_base::app);

    // if(!log_file.is_open())
    // {
    //     cerr << "Errr";
    // }

    // log_file << text << '\n';

    // log_file.close();

    log.push_back(text);
}

string LogCntr::reade_line(int line)
{
    // string str;

    // ifstream log_file(log_file_name);

    // if(!log_file.is_open())
    // {
    //     cerr << "Errr";
    // } 


    // for (int i = 0; i < line; i++)
    // {
    //     getline(log_file, str);
    // }

    // log_file.close();

    // return(str);

    return log.at(line);
}

int LogCntr::getLineCount()
{
    return log.size();
}
