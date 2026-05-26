// Q10. Design a program to calculate employee salary where:
// ● Default bonus is Rs. 5000.
// ● Default tax percentage is 5%.

#include<iostream>
using namespace std;

float clacSalary(float salary, int bonus=5000,int tax = 4){
    return  (salary+bonus)-(salary+bonus)*tax/100;
}

int main(){
    float salary;
    cout<<"enter salary of employee"<<endl;
    cin>> salary;
    cout<<"salary= "<<clacSalary(salary);
    return 0;
}