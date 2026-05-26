// Q2. Write a program to create a class name COMPLEX with data members real,
// and imz and add tow complex numbers taking objects as function arguments.

#include<iostream>
using namespace std;

class Complex_number{
    private:
    int real, imz;
    public:
    void input(){
        cout<<"enter real and imaginary part of complex number"<<endl;
        cin>>real>> imz;
    }
    void display(){
        cout<<real<<"+"<<imz<<"i";
    }
    void addComplex(Complex_number C1, Complex_number C2){
        real = C1.real+C2.real;
        imz = C1.imz+C2.imz;
    }
};

int main(){
    Complex_number complex_1, complex_2;
    complex_1.input();
    complex_2.input();
    complex_1.addComplex(complex_1,complex_2);
    complex_1.display();
    return 0;
}
