#include "../inc/MyVector.h"
#include <iostream>
#include "MyVector.h"

MyVector::MyVector()
{
}

MyVector::MyVector(MyVector *obj)
{
    this->coordinates = obj->coordinates;
}

MyVector::~MyVector()
{
}

void MyVector::set_coordinates(int measurement, double value)
{
    if(coordinates.size() > measurement)
    {
        coordinates[measurement] = value;
    }
    else
    {
        coordinates.insert(coordinates.end(), value);
    }
}

double MyVector::get_coordinates(int measurement)
{
    if(coordinates.size() > measurement)
    {
        return coordinates.at(measurement);
    }
    else
    {
        throw std::invalid_argument("invalid coordinates");
        return 0;
    }
}

int MyVector::count_measurement()
{
    return coordinates.size();
}
MyVector MyVector::operator+(MyVector obj)
{
    if(this->coordinates.size() != obj.coordinates.size())
    {
        return nullptr;
    }

    MyVector* tmp = new MyVector();

    for (int i = 0; i < this->coordinates.size(); i++)
    {
        tmp->set_coordinates(i, (get_coordinates(i) + obj.get_coordinates(i)));
    }

    return tmp;
}
