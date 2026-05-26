// WAP  in C++ to find the TSA, CSA and Volume of  
// cylinder using the concept of class and object.

#include<iostream>
using namespace std;

class Shapes
{
    int height, radius,;
    public:
    void input()
    {
        cin>>height>>radius;
    }
    float TSA()
    {
        return ( 2*3.14*radius*(radius+height));
    }
    float CSA()
    {
        return(2*3.14*radius*height);
    }
};

int main()
{
    Shapes s1;
    s1.input();
    cout<<"Tsa = "<<s1.TSA()<<" Csa = "<<s1.CSA();
    return 0;
}