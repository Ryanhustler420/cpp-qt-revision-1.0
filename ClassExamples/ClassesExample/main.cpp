#include "Rectangle.h"
#include "Para.h"
#include "Square.h"
using namespace std;

int main()
{
    Rectangle r;
    Rectangle r1(20,20);
    Para p(30, 30, 30);
    Square s(40);
    cout <<  "The area of the rectangle is: " << r1.getArea() << endl;
    cout <<  "The volume of our shape is: " << p.getVolume() << endl;
    cout <<  "The area of your squre is: " << s.getArea() << endl;
    return 0;
}
