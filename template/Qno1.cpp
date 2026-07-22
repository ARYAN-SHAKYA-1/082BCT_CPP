/*
Qno1.write a program to illustrate the concept of function templet.(to swap vaules)
*/
#include<iostream>
using namespace std;
template <class t>
void swamp(t *a , t *b)
{
    t temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int ai,bi;
    float af,bf;
    cout<<"Enter two intiger vaues:"<<endl;
    cin>>ai>>bi;
    swamp(&ai,&bi);
    cout<<"the swaped value is"<<ai<<" "<<bi<<endl;
    
    cout<<"Enter two floating vaues:"<<endl;
    cin>>af>>bf;
    swamp(&af,&bf);
    cout<<"the swaped value is"<<af<<" "<<bf<<endl;
    return 0;
}