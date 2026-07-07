/*
Qno8.wap to show the order of invocation of construcutor and distruction in single level  inheritance.
*/
#include<iostream>
using namespace std;
class A 
{
    public:
            A()
            {
                cout<<"A constructor"<<endl;
            }
            ~A()
            {
                cout<<"A distructor"<<endl;
            }
};
class B :public A
{
    public:
            B()
            {
                cout<<"B constructor"<<endl;
            }
            ~B()
            {
                cout<<"B distructor"<<endl;
            }
};

int main()
{
    B b1;
    return 0;
}