// Q6. Write a C++ program to overload a function swapData() to swap:
// ● Two integers
// ● Two floating point numbers

#include<iostream>
using namespace std;

void swapData( int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapData( float &a, float &b){
    float temp;
    temp=a;
    a=b;
    b=temp;
}
 

int main(){
    int a,b;
    float c ,d;
    cout<<"enter value of a,b,c and d"<<endl;
    cin >>a>>b>>c>>d;
    cout<<"before swapping"<<endl;
    cout<<"a= "<<a<<" b= "<<b<<" c = "<< c<< " d ="<<d<<endl;
    swapData(a,b);
    swapData(c,d);
    cout<<"after swapping"<<endl;
    cout<<"a= "<<a<<" b= "<<b<<" c = "<< c<< " d ="<<d;
    
    return 0;

}