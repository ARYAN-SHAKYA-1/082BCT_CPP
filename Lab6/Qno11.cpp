/*
Qno11.wap to illustrate the concept of multilevel inheritance
*/
#include<iostream>
using namespace std;
class A
{
    public:
            void output()
            {
                cout<<"This is the function of A"<<endl;
            }

};
class B : public A
{
    public:
            B()
            {
                cout<<"B created"<<endl;
            }
};
class C: public B 
{
    public:
            C()
            {
                cout<<"c created"<<endl;
            }
};

int main()
{
    C c1;
    c1.output();
    return 0;
}