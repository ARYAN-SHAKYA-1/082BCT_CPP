// Q6. Write a program to create a class name DISTANCE with data members 
// inch, and feet and initialize using the constructor add two DISTANCE 
// using friend function.

#include<iostream>
using namespace std;

class Distance
{
    int ft,in;
    public:

    void input()
    {
        cin>>ft>>in;
    }
    void Display(){
        cout<<ft<<"ft "<<in<<"in";
    }
    friend Distance addDistances(Distance d1,Distance d2);
};


Distance addDistances(Distance d1, Distance d2){
    Distance d3;
    d3.in =d1.in+d2.in;
    d3.ft= d1.ft+d2.ft+d3.in/12;
    d3.in%=12;
    return d3;
}

int main()
{
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3=addDistances(d1,d2);
    d3.Display();
    return 0;
}