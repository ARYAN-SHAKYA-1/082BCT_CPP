//wap to illustrate the concept of handling all exception
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char name[10]="Pokhara";
    cout<<"enter a deviden"<<endl;
    cin>>x;
    cout<<"enter a divisor:"<<endl;
    cin>>y;
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
        for(int i=0;i<20;i++)
        {
            if(i>6)
            {
                throw name[i];
            }
            else
            {
                cout<<name[i]<<endl;
            }
        }
    }
    catch(...)
    {
        cout<<"Error occourd"<<endl;
    }
    return 0;
}