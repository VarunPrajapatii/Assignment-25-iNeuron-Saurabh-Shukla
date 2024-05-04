// Que7
/*
7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.
*/

#include<iostream>
using namespace std;

class Greatest
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
    Greatest l1;
    ans = l1.largest(a,b,c);
    cout<<"Largest is "<<ans;
    return 0;
}