#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    cout<< "default constructor was called" << endl;
    this->length = 5;
    this->width = 5;
}

Rectangle::Rectangle(int w, int l):width(w),length(l)
{
    clog<< "Custom Constructor called" << endl;
}

void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}
