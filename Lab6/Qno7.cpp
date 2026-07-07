/*
Qno7.wap to illustate the concept of data member ambiguity in multiple inheritance; 
*/
#include<iostream>
using namespace std;
class A 
{
    protected:
    int a;
    public:
        void input()
        {
            cout<<"Enter a number";
            cin>>a;
        }
        void output()
        {
            cout<<"this is output of A"<<endl;
        }
};
class B 
{
    protected:
        int a;
    public:
        void input()
        {
            cout<<"Enter a number";
            cin>>a;
        }
        void output()
        {
            cout<<"this is output of B"<<endl;
        }
};
class C : public A ,public B 
{
    int y;
    public:
            void sum()
            {
                y=0;
                y=A::a+B::a;
            }
            void output()
            {
                cout<<"the sum is :"<<y<<endl;
            }
    
};
int main()
{
    C c1;
    c1.A::input();
    c1.B::input();
    c1.sum();
    c1.output();
    return 0;
}