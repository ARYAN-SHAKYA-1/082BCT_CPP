//unary operator overloading;

/* 
    for pre increment
    returnType operator(keyword) operatorSymbol(argument) 
    {
    //body;
    }
    for post increment
    returnType 
*/
#include<iostream>
using namespace std;

class test{
    int x;
    public:
    void input(){
        cin>>x;
    }
    void display(){
        cout<<"the value of x is"<<x<<endl;
    }
    int operator ++(){
        x = x+2;
    }
};

int main()
{
    test t;
    t.input();
    ++t;
    t.display();
    return 0;
}