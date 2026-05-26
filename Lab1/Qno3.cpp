// Q3. Write a program to create a class name DISTANCE with data members inch,
// and feet and add two DISTANCE objects taking objects as function arguments.

#include<iostream>
using namespace std;

class Distances{
    private:
    int ft, in;
    public:
    void input(){
        cout<<"enter distacne in feet and inches"<<endl;
        cin>>ft>>in;
    }
    void display(){
        cout<<ft<<"ft "<<in<<"inches";
    }
    void addDistances(Distances d1, Distances d2){
        in= d1.in+ d2.in;
        ft= d1.ft+ d2.ft + in/12;
        in %= 12;
    }
};
 
int main(){
    Distances distance1, distance2;
    distance1.input();
    distance2.input();
    distance1.addDistances(distance1,distance2);
    distance1.display();
    return 0;   
}