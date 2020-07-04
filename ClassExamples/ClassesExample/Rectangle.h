#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(); /* default constructor */
    Rectangle(int widht, int length);
    void setWidth(int width);
    void setLength(int length);
    int getArea(){return width * length;}
private:
    int width;
    int length;
};

#endif // RECTANGLE_H
