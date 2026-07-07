/*
Qno12.wap to illustrate the conncept of herichical inheritance
*/
#include<iostream>
using namespace std;
class A
{
    
    public:
        void output()
        {
 ;           cout<<"this is the function of A"<<endl;
        }
};
class b : public A 
{
    public:
        b()
        {
            cout<<"b created"<<endl;
        }

};
class c: public A 
{
    
    public:
        c()
        {
            cout<<"c created"<<endl;
        }

};
int main()
{
    b b1;
    c c1;
    b1.output();
    c1.output();
    return 0;
}
