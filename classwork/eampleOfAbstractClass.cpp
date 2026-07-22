/*
wap in cpp to  illustrate the concept of array of pointer to the base class.
wap in cpp to illustrate the concept of abstract class and pure virtual funtion.

*/

#include<iostream>
using namespace std;
class base //abstract
{
    public:
    virtual void show()=0;//pyre virtual function

};
class derve1: public base
{
    public:
    void show(){
        cout <<"inside derived 1 class show()"<<endl;
    }
};
class derve2: public base
{
    public:
    void show(){
        cout <<"inside derived 2 class show()"<<endl;
    }
};
int main(){
    base *arr[2];
    derve1 dv1;
    derve2 dv2;
    arr[0]=&dv1;
    arr[1]=&dv2;
    arr[0]->show();
    arr[1]->show();
    return 0;
}

