#ifndef PARA_H
#define PARA_H

#include "Rectangle.h"
#include <iostream>

using namespace std;

class Para
{
public:
    Para(int w, int l, int h):r(w,l), height(h){
        cout << "Para constructor called" <<endl;
    }
    int getVolume()
    {
        return r.getArea() * height;
    }
private:
    Rectangle r;
    int height;
};

#endif // PARA_H
