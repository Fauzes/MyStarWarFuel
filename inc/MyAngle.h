#ifndef __MyAngle__
#define __MyAngle__

class MyAngle
{
private:
    double angle;
public:
    MyAngle();
    MyAngle(MyAngle* obj);
    ~MyAngle();

    void setAngle(double ang);
    double getAngle();

    MyAngle operator+ (MyAngle obj); 
};


#endif
