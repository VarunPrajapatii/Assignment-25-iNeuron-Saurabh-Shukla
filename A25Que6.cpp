// Que6
/*
6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.
*/

#include<iostream>
using namespace std;

int count;

class Square
{
    int n;
    public:
        void setData(int a)
        {
            count++;
            n=a;
        }

        int sq()
        {
            count++;
            return n*n;
        }
};

int main()
{
    Square s1;
    int ans;
    s1.setData(5);
    ans=s1.sq();
    cout<<"The square is "<<ans<<" and the number of function called is "<<count<<".";

}