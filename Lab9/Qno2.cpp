/*
define a class to reprent time. it should have a member funtion to read time from the user and a member function to display the time. the function to read time must raise and exception if the user enters invalid valuse for hour minutes or second the exception throw should contain argument the exception should be handelloed outside the member funtion of the class.
*/
#include<iostream>
using namespace std;
class InvalidTime{
    public:
    char * messages;
    InvalidTime(char *msg){
        messages = msg;
    }
};
class Time{
    int hr,min,sec;
    public:
    void input(){
        cout<<"enter hr min and sec";
        cin>> hr>>min>>sec;
        if(sec>59 || sec<0){
            throw InvalidTime ("Exception Second greater than 59 or less than 0");
        }
        if(min>59 || min<0){
            throw InvalidTime ("Exception minute is greater than 59 or less than 0");
        }
        if(hr>23 || hr<0){
            throw InvalidTime ("Exception hour is greater than 23 or less than 0");
        }
    }
    void display(){
        cout<<"hr:"<<hr<<" min:"<<min<<" sec:"<<sec<<endl;
    }    
};

int main(){
    Time t1;
    try
    {
        t1.input();
        t1.display();
    }
    catch(InvalidTime e)
    {
        cout<<"Exception"<<e.messages<<endl;
    }
    
}