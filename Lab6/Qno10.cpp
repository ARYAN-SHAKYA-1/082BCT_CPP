/*
Qno10.wap to  illistrate the concept of Is-a ans has-a Relationship
*/
#include<iostream>
using namespace std;
class A 
{
    public:
    A()
    {
        cout<<"This is A"<<endl;
    }
    void output()
    {
        cout<<"this is from  A class"<<endl;
    }
};
class B
{
    private:
            A a1;
            
            
    public:
            B()
            {
                cout<<"This is b"<<endl;
                a1.output();
            }
            
};
int main()
{
    B b1;
}