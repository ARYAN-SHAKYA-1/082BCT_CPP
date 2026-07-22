#include<iostream>
using namespace std;
template <class T>
T Max (T x, T y){
    if( x>y){
        return x;
    }
    else{
        return y;
    }
}
int Max (int x,int y, int z){
    if(x>y&& x>z)
    return x;
    else if(y>x &&y>z)
    return y;
    else
    return z;
}
int main()
{
    int a ,b ,c;
    cout<<"enter there number :"<<endl;
    cin>>a>>b>>c;
    cout<<"The  greater among a and b is :"<< Max(a,b)<<endl;
    cout<<"The  greater among a  b and c is :"<< Max(a,b,c)<<endl;

}