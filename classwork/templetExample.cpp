#include<iostream>
using namespace std;
 template <class T>
T  addition (T x, T y)
{
return (x + y);
}
int main(){
    int a = 1 , b =2 ,sumi=0;
    float c = 1.1 , d = 2.2, sumf=0;
    sumi = addition(a,b);
    sumf = addition(c ,d );
 cout<<"sum = "<< sumi;
    cout<<"sum = "<< sumf;
}