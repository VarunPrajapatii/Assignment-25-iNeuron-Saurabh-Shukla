// Que1
/*
1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
*/


#include<iostream>
using namespace std;


class Complex
{
    int real, img;
    public:
        void setVal(int r, int i)
        {
            real=r;
            img=i;
        }
        void display()
        {
            cout<<real<<" + "<<img<<"i";
        }

};


int main()
{
    Complex c1;
    c1.setVal(2,5);
    c1.display();
}