#ifndef rectangle_h
#define rectangle_h

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w);
    int setLength(int l);
    int setWidth(int w);
    int getLength();
    int getWidth();
    int getArea();
};

#endif
