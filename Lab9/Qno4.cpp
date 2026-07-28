/*
wap to read three umber x,y,z adn evaluate r given by r= z/(x-y). insde a duntion  use exveption handelling vase in divior by zero is attempted 
*/
#include<iostream>
using namespace std;
    void divide(float x, float y, float z){
    float r= x-y;
    if(r >0){
            cout<<"X/Y:"<<x/y<<endl;
            cout<<"Result Z/R:"<<z/r<<endl;
        }
        else
        throw(r);
}
int main(){
    try
    {
        divide(20,10,30);
    }
    catch(float r)
    {
        if(r=0){
            cout<<"Exception : dividing with  0"<<endl;
        }
    }
    
}