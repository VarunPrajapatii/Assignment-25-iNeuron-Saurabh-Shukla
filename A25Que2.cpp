// Que2
/*
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/


#include<iostream>
using namespace std;

class Time
{
    int hr, min, sec;
    public:
        void setVal(int h, int m, int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
        void display()
        {
            cout<<hr<<" hr "<<min<<" min "<<sec<<" sec";
        }
};


int main()
{
    Time t1;
    t1.setVal(1,20,47);
    t1.display();
    return 0;
}