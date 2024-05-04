// Que8
/*
8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.
*/


#include<iostream>
using namespace std;

class Rectangle
{
    int l,b;
    public:
        void setDimentions(int x, int y)
        {
            l=x;
            b=y;
        }
        int area()
        {
            return l*b;
        }


};

int main()
{
    Rectangle r1;
    int area;
    r1.setDimentions(4,6);
    area=r1.area();
    cout<<"Area is "<<area;

}