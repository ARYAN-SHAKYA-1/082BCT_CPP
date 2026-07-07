/*
qno 5 
wap to illustrate the concept of function overriding
*/
#include<iostream>
using namespace std;
class animal{
    protected:
        char name[10];
        int age;
    public:
    void input(){
        cout<<"enter name and age:";
        cin>>name >>age;
    }
     void display(){
        cout<<"Name"<<name<<endl<<"age"<<age<<endl;
    }
    void speak(){
        cout<<"noise";
    }
};
class dog: public animal{
    public:
    void speak(){
        cout<<"bark!!!";
    }
};

int main(){
    dog d1;
    d1.input();
    d1.display();
    d1.speak();
}