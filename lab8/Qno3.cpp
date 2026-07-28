 /*
Qno2.write a program to illustrate the concept of function template overloading
*/
#include<iostream>
using namespace std;
template <class t>
t add(t a , t b)
{
    return a+b;
}
template<class T>
T add(T a, T b,T c)
{
    return a + b +c;
}
int main()
{
    int ai,bi;
    int af,bf,cf;
    cout<<"Enter two intiger vaues:"<<endl;
    cin>>ai>>bi;
    cout<<"sum:"<<add(ai,bi)<<endl;
    cout<<"Enter two float vaues:"<<endl;
    cin>>af>>bf>>cf;
    cout<<"sum:"<<add(af,bf,cf)<<endl;
    return 0;
}