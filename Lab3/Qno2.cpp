#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int[5];
    cout<<"enter value in array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>> ptr[i];
    }
    cout<<"the output is"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i];
    }
    delete ptr;
    return 0;
}