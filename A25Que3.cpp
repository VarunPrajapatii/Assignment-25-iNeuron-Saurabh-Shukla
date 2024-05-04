// Que3
/*
3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.
*/


#include<iostream>
using namespace std;

class Factorial
{
    int f;
    public:
        void setVal(int n)
        {
            f=n;
        }
        int Fact()
        {
            int i;
            long n=1;
            for(i=f; i!=0; i--)
            {
                n=n*i;
            }
            return n;
        }
};


int main()
{
    Factorial f1;
    int ans;
    f1.setVal(10);
    ans=f1.Fact();
    cout<<ans;
}