#include<iostream>
#include "./classes/staff.cpp"
#include "./fileHandeling/input.cpp"
using namespace std;
int main(){
    Staff p1;
    p1.setName("aryan");
    p1.setAge(19);
    p1.setId(006);
    p1.setAddress("Kathmandu");
    p1.setSalary(200000);
    p1.setTeacher(true);

    p1.takeLeave();
    p1.takeLeave();
    p1.takeLeave();

    cout<<p1.getName()<<endl
        <<p1.getAge()<<endl
        <<p1.getId()<<endl
        <<p1.getAddress()<<endl
        <<p1.getNoOfLeaves()<<endl;
    if(p1.getTeacher()){
        cout<<"Is a teacher";
    }
    else{
        cout<<"Is a non-teacher staff";
    }
    input();
    
    return 0;
}