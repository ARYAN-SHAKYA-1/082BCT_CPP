// Q8. Write a C++ program to overload a function convert() for:
// ● Celsius to Fahrenheit
// ● Fahrenheit to Celsius

#include<iostream>
using namespace std;

float convert(int celcius){
    return (celcius*(9/5))+32;
}
float convert(float faherenite){
    return (faherenite+32)*5/9;
}


int main(){
    int c;
    float f;
    cin>>c>>f;
    cout<<"c to f "<<convert(c)<<endl;
    cout<<"f to c "<<convert(f)<<endl;
    return 0;
}