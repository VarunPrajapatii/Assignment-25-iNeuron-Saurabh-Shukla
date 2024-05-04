// Que9
// 9. Define a class Circle and define an instance member function to find the area of the circle.


#include<iostream>
using namespace std;

class Circle
{
    int r;
    public:
        void setRadius(int n)
        {
            r=n;
        }
        float area()
        {
            return 3.14*r*r;
        }
};


int main()
{
    Circle c1;
    float ans;
    c1.setRadius(5);
    ans=c1.area();
    cout<<"The area is "<<ans;
    return 0;
}