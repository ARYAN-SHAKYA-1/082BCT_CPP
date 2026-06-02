// wap to create a constant object and consant member function. create a function name set data
//to initile the data member of constant object 

#include<iostream>
using namespace std;

class Time{
    int a;
    public:
    Time(){
        a=0;
    }
    Time(int x){
        a=x;
    }
    void setData() const{
        scanf("%d",a);
    }
};
int main(){
    const Time t(50);
    t.setData();
}
