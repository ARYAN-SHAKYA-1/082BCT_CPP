#include<iostream>
using namespace std;

float area(float length)
{
    return length*length*length;
}

float area(float lenght,float bredth, float height)
{
    return lenght*bredth*height;
}

int main()
{
    float length, breadth, height, c_length;
    cout<<"enter the lenght, bredth,height of cuboid"<<endl;
    cin>>length>>breadth>>height;
    cout<<"enter the lenght of cube"<<endl;
    cin>>c_length;
    cout<<"volume of cuboid is="<<area(length,breadth,height)<<endl;
    cout<<"volume of cude is="<<area(c_length)<<endl;
    return 0;
}