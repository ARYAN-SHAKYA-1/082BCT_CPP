/*
Qno2.write a program to illustrate the concept of function template and non template(to swap vaules)
*/
#include<iostream>
using namespace std;
template <class t>
t add(t a , t b)
{
    return a+b;
}
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int ai,bi;
    float af,bf;
    cout<<"Enter two intiger vaues:"<<endl;
    cin>>ai>>bi;
    cout<<"sum:"<<add(ai,bi)<<endl;
    cout<<"Enter two float vaues:"<<endl;
    cin>>af>>bf;
    cout<<"sum:"<<add(af,bf)<<endl;
    
}