#ifndef __ComandExeption__
#define __ComandExeption__

#include <stdint.h>
#include <exception>
#include <string>

class ComandExeption: public std::exception
{
private:
    std::string str;
public:
    ComandExeption(const std::string msg);
    ~ComandExeption();

    const char* what() const noexcept override;
};

#endif
