/*
Qno5. WAP to illistrate the concept of multiple template
*/
#include<iostream>
using namespace std;
template<class T1, class T2, class T3>
void helo(T1 a,T2 b,T3 c)
{
    cout<<"size of:"<<sizeof(a)<<"bytes"<<endl;
    cout<<"size of:"<<sizeof(b)<<"bytes"<<endl;
    cout<<"size of:"<<sizeof(c)<<"bytes"<<endl;
}
int main()
{
    helo(1, 2.2,'z');
    return 0;
}