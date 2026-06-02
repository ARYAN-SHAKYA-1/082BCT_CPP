#include<iostream>
using namespace std;

class test
{
    int a;
    public:
        void input()
        {
            cout<<"enter value";
            cin>>a;
        }
        void operator ++(int)
        {
            a=a+5;//plus 5 huncha.
        }
        void dispay()
        {
            cout<<"the value of a:"<<a;
        }
};

int main()
{
    test t;
    t.input();
    t++;
    t.dispay();
}