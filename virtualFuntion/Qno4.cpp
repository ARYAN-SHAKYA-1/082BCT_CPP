/*
wap to illustrat the concept of array of pointer to base class 
*/
#include<iostream>
using namespace std;
class baseClass{
    protected:
    int a;
    public:
     virtual void show(){};
     void input(){
        cin>>a;
     }
};
class derivedClass: public baseClass{
    public:
    void show(){
        cout<< a;
    }
};
int main(){
    baseClass *ptr[5];
    derivedClass obj1, obj2, obj3;
    ptr[0] = &obj1;
    ptr[1] = &obj2;
    ptr[2] = &obj3;
    for(int i=0;i<3;i++){
        ptr[i]->input();
    }
    for(int i=0;i<3;i++){
        ptr[i]->show();
    }
   return 0;
}