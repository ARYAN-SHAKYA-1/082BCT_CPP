//1) create a class" Time " with data member day, hour, min, 
//and second overload the binary - operator to subtract two 
//time object

#include<iostream>
using namespace std;
class Time
{
private:
    int day, hour, min, sec;
public:
    Time(){
        day=0;
        hour=0;
        min=0;
        sec=0;
    }
    Time(int d, int h, int m, int s){
        day=d;
        hour=h;
        min=m;
        sec=s;
    }
    Time operator-(Time t){
        Time temp;
        temp.sec=sec-t.sec;
        temp.min=min-t.min;
        temp.hour=hour-t.hour;
        temp.day=day-t.day;
        return temp;
    }
    void display(){
        cout<<"Day: "<<day<<" Hour: "<<hour<<" Min: "<<min<<" Sec: "<<sec<<endl;
    }
};
int main(){
    Time t1(2, 5, 30, 45),t2(1, 3, 20, 30),t3;
    t3=t1-t2;
    t3.display();
}