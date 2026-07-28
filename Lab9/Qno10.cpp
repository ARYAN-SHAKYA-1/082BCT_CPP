//wap to illiustrate the concept of handling uncaught exception
#include<iostream>
using namespace std;
void rethrowDemo(int x , int y)
{
    try
    {
        if(y!=0)
        {
            cout<<"the result of devision is:"<<x/y<<endl;
        }
        else
        {
            throw y;
        }
    }
    catch(int z)
    {
       cout<<"can't handle this, rethrowing"<<endl;
        throw z;
    }
    
}
int main()
{
    int x,y;
    cout<<"Enter Divider:";
    cin>>x;
    cout<<"Enter devisor:";
    cin>>y;
    try
    {
        rethrowDemo(x,y);
    }
    catch(int p)
    {
        cout<<"caaught divider by zero exception"<<endl;
    }
    return 0;
}