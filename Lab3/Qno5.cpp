<<<<<<< HEAD
#include<iostream>
using namespace std;

class test
{
    int a;
    public:
        void input()
        {
            cout<<"enter value";
            cin>>a;
        }
        void operator --(int)
        {
            a=a-5;//plus 5 huncha.
        }
        void dispay()
        {
            cout<<"the value of a:"<<a;
        }
=======
//unary operator overloading;
//post increment

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
    int operator ++(int){
        x = x+2;
    }
>>>>>>> f5b9d4bc25c5f6cedb76f674cb14955b03e40f63
};

int main()
{
    test t;
    t.input();
<<<<<<< HEAD
    t--;
    t.dispay();
=======
    t++;
    t.display();
    return 0;
>>>>>>> f5b9d4bc25c5f6cedb76f674cb14955b03e40f63
}