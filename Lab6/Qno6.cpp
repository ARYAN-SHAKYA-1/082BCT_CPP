/*
Qno6.wap to illustate the concept of function ambiguity in multiple inheritance; 
*/
#include<iostream>
using namespace std;
class A 
{
    public:
        void output()
        {
            cout<<"this is output of A"<<endl;
        }
};
class B 
{
    public:
        void output()
        {
            cout<<"this is output of B"<<endl;
        }
};
class C : public A ,public B 
{
    
};
int main()
{
    C c1;
    c1.A::output();
    c1.B::output();
    return 0;
}