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
      A(){
        cout<<"A construct"<<endl;
      }
};
class B 
{
    protected:
        int a;
    public:
       B(){
        cout<<"b construct"<<endl;
      }
};
class C : public A ,public B 
{
    int y;
    public:
     C(){
        cout<<"c construct"<<endl;
      }
};
int main()
{
    C c1;
    return 0;
}