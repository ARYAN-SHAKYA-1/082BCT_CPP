/*
Qno9.wap to show the order of invocation of construcutor and distruction in muiltilevel inheritance.
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
class C :public A
{
    public:
            C()
            {
                cout<<"C constructor"<<endl;
            }
            ~C()
            {
                cout<<"C distructor"<<endl;
            }
};
int main()
{
    B b1;
    C c1;
    return 0;
}