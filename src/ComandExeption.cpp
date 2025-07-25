#include "../inc/ComandExeption.h"


ComandExeption::ComandExeption(const std::string msg)
{
    str = msg;
}

ComandExeption::~ComandExeption()
{
}

const char *ComandExeption::what() const noexcept
{
    // return str.c_str();

    return "Error not fuel";
}
