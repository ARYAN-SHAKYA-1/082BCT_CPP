// Q9. Write a program to find the simple interest using default values for:
// ● Rate = 10%
// ● Time = 2 years

#include<iostream>
using namespace std;

float simpleInterest(double p, int r=10, int t=2){
    return (p*t*r)/100;
}

int main(){
    double p;
    cout<<"enter principle ";
    cin>>p;
    cout<< "the simple interest is"<<simpleInterest(p);
    return 0;
}