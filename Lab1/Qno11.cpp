// Q11. Write a C++ program to declare an enum named days containing all days of the
// week and display them.

#include<iostream>
using namespace std;

enum days{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main(){
   cout<<SUNDAY<<endl<<
    MONDAY<<endl<<
    TUESDAY<<endl<<
    WEDNESDAY<<endl<<
    THURSDAY<<endl<<
    FRIDAY<<endl<<
    SATURDAY;
    return 0;
    
}