// Q14. Write a C++ program using enum to build a simple menu-driven application for:
// ● Add
// ● Subtract
// ● Multiply
// ● Divide

#include<iostream>
using namespace std;

enum Menu{
    ADD=1,SUBTRACT,MULTIPLY,DIVIDE
};
int main(){
    int a,v1,v2;
    cout<<"enter two number"<<endl;
    cin>>v1>>v2;
    cout<<"(1) add\n(2) Substract\n(3) multiply\n(4) divide\n";
    cin>> a;
    switch (a)
    {
    case 1:
        cout<< v1+v2;
        break;
     case 2:
        cout<< v1-v2;
        break;
     case 3:
        cout<< v1*v2;
        break;    
     case 4:
        cout<< (float)v1/v2;
        break;
    default:
        cout<<"option out of bound";
        break;
    }
    
}