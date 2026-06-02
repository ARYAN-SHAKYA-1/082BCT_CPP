#include<iostream>
using namespace std;
class obj
{
    int a,b;
    public:
        void input()
        {
            cout<<"enter the value for constant"<<endl;
            cin>>a>>b;
            
        }
        void display()
        {
            cout<<"the value is"<<a,b;
        }
};

int main()
{
    const obj myObject;
    myObject.input();
    myObject.display();
    return 0;
}