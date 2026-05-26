// Q12. Create an enum trafficLight with values:
// ● RED
// ● YELLOW
// ● GREEN
// Display appropriate messages for each signal.

#include<iostream>
using namespace std;

enum Signal{
    RED, YELLOW, GREEN
};
 
int main(){
    Signal s = RED;
    if(s==RED){
        cout<<"stop";
    }
    else if(s==YELLOW){
        cout<<"Get ready";
    }else if(s==GREEN){
        cout<<"go";
    }

}