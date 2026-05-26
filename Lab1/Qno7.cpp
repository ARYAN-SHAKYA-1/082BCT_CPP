// Q7. Write a program using default arguments to calculate the power of a number.
// ● If exponent is not supplied, assume it as 2.

//wap to add cm mm and km

#include<iostream>
#include<math.h>
using namespace std;

int calcExpo(int a, int power= 2){
    return pow(a,power);   
}
int main(){
    int a ;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<calcExpo(a);
    return 0;
}