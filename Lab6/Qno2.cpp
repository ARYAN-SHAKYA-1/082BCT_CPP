/*
Qno 2
wap that inherits a class that represent animal and creat the derived class cow. Use proper member funtion to make you program meaningfull
*/
#include  <iostream>
using namespace std;
class animal{
    protected:
    char name[50],food[50];
    public:
    void input(){
        cout<<"enter name and food:";
        cin>> name>> food;
    }
    void eat(){
        cout<<"eat "<< food<<endl;
    }
};
class cow: public animal{
    public:
    void giveMilk(){
        cout<<"98%' pure milk";
    }
};
int main(){
    cow c1;
    c1.input();
    c1.eat();
    c1.giveMilk();
}
