/*
wap to read three number X,Y, and Z revalueat R give by R = Z/(X-Y).use exveption handeling to throw and exveption in case division by zero is attempted
*/

#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cin>>x>>y>>z;
    float r= x-y;
    try
    {
        if(r >0){
            cout<<"X/Y:"<<x/y<<endl;
            cout<<"Result Z/R:"<<z/r<<endl;
        }
        else
        throw(r);
    }
    catch(float r)
    {
        if(r=0){
            cout<<"Exception : dividing with  0"<<endl;
        }
    }
    
}