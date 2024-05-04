// Que5
/*
5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.
*/

#include<iostream>
using namespace std;

class ReverseNumber
{
    int n;
    public:
        void setValue(int x)
        {
            n=x;
        }

        int Reverse()
        {
            int i, a, rev=0;
            a=n;
            while(a!=0)
            {
                rev=rev*10+a%10;                
                a=a/10;
            }
            return rev;
        }
};

int main()
{
    int ans;
    ReverseNumber r1;
    r1.setValue(2536);
    ans=r1.Reverse();
    cout<<"Reverse is "<<ans;
    return 0;
}