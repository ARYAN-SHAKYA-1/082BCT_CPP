// Q1. Write a program to create a class name TIME with data members hours,
// minute and second add two TIME objects taking objects as function arguments.

#include<iostream>
using namespace std;

class TIME{
    private:
    int hour,minute,second;
    public:
    void input(){
        cout<<"enter hour minute and second";
        cin>>hour>>minute>>second;
    }
    void display(){
        cout<<hour<<"hr"<<minute<<"min"<<second<<"second";
    }
    void addTime(TIME t1,TIME t2){
        second = t1.second +t2.second;
        minute =t1.minute+t2.minute+ (second/60);
        second =second%60;
        hour =  t1.hour+t2.hour+minute/60;
        minute=minute%60;
    }
};

int main(){
 TIME time_1,time_2;
  time_1.input();
  time_2.input();
  time_1.addTime(time_1,time_2);
  time_1.display();
return 0;
}