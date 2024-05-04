// Que4
/*
4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.
*/


#include<iostream>
using namespace std;

class LargestNumber
{
    public:
        int largest(int a, int b, int c)
        {
            int large= a>b?(a>c?a:c):(b>c?b:c);
            return large;
        }
};


int main()
{
    int a, b, c, ans;
    cout<<"This program finds greatest among 3 numbers entered."<<endl;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    LargestNumber l1;
    ans = l1.largest(a,b,c);
    cout<<"Largest is "<<ans;
    return 0;
}