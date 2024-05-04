// Que10
/*
10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.
*/

#include<iostream>
using namespace std;

class Area
{
    public:
        int areaSq(int n)
        {
            return n*n;
        }
        int areaRec(int l, int b)
        {
            return l*b;
        }
        float areaCir(int r)
        {
            return 3.14*r*r;
        }
};

int main()
{
    Area a1,a2,a3;
    cout<<"Area of Square is "<<a1.areaSq(5)<<endl;
    cout<<"Area of Rectangle is "<<a1.areaRec(2,8)<<endl;
    cout<<"Area of Circle is "<<a1.areaCir(5);


}