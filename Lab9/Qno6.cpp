//wap to illiustrate the concept of multiple catch block
#include<iostream>
using namespace std;
int main()
{
    char name[]="Pokhara";
    int a,b,x;
    cout<<"Enter two numbers a and b"<<endl;
    cin>>a>>b;
    x=a-b;
    try
    {
        if (x==0)
        {
            throw x;
        }
        else
        {
            cout<<"result of a/x:"<<a/x<<endl;
        }
        for(int i=0;i<=20;i++)
        {
            if (i>6)
            {
                throw name[i];
            }
            else
            {
                cout<<name[i];
            }
        }
    }
    catch(int ei)
    {
        cout<<"the devidend ny zero error"<<endl;
    }
    catch(char ec)
    {
        cout<<"\n array out of bound"<<endl;
    }
    return 0;
}