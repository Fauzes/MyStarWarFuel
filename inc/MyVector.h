#ifndef __MyVector__
#define __MyVector__

#include <vector>

class MyVector
{
private:
    std::vector<int> coordinates;
public:
    MyVector();
    MyVector(MyVector* obj);
    ~MyVector();

    void set_coordinates(int measurement, double value);
    double get_coordinates(int measurement);
    int count_measurement();

    MyVector operator+ (MyVector obj);
};

#endif
