// Q5. Write a C++ program to overload a function area() to calculate:
// ● Area of a circle
// ● Area of a rectangle
// ● Area of Triangle

#include<iostream>
using namespace std;

float area(float radius){
    return 3.14*radius*radius;
}
float area( int lenght , int bredth){
    return lenght*bredth;
}
float area(float height,float base){
    return (height*base)/2;
}

int main() {
    int lenght , bredth ;
    float radius, height, base;

    cout<<"enter radius of circle \nlenght and bredth of rectangle\nbase and height of triangle";
    cin>>radius>>lenght>>bredth>>base>>height;
    cout<<"area of circle:"<<area(radius)<<endl;
    cout<<"area of reactange:"<<area(lenght,bredth)<<endl;
    cout<<"area of triangle:"<<area(base,height)<<endl;
    return 0;


}

