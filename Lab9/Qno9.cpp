//Wap to illiustrate the concept of rethrowing an exception
#include<iostream>
using namespace std;
void rethrowDemo(int x, int y)
{
    try
    {
        if(y!=0)
        {
            cout<<"the result of devision:"<<x/y<<endl;
        }
        else
        {
            throw y;
        }
    }
    catch( int z)
    {
        cout<<"cannot handle this"<<endl;
        throw z;
    }
}
int main()
{
    int a,b;
    cout<<"Enter devidend and deivisor"<<endl;
    cin>>a>>b;
    try
    {
        rethrowDemo(a,b);
    }
    catch(int p)
    {
        cout<<"there is a new exception caught"<<endl;
    }
    return 0;
}