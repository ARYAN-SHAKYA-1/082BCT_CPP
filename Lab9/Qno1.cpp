/*
write a program to find the square root of a number check the validity of input number and raise the exception as needed
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a;
 cin>>a;
 try{
     if(a>0){
         cout<<sqrt(a)<<endl;
     }
     else throw (a);
 }
 catch(int a){
     if(a<0){
         cout<<"exception a is less than 0";
     }
     else if(a == 0){
         cout<<"a is zero";
     }
    }
}