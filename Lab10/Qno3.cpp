/*
Write a program with a class Employee (name, employee Id, age, salary); add records of 10
employees to a file, display them on console, and search a specific record by employee Id.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Employee{
    public:
    int id;
    char name [30];
    int age;
    float salary;

    void input(){
        cout <<"enter employee id:";
        cin>> id;
        cout<<"Enter name:";
        cin>> name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter salary:";
        cin>>salary;
    }
    void display(){
        cout<<id<<"\t"<<name <<"\t"<<age<<"\t"<< salary <<endl;
    }
};
int main(){
    Employee emp;
    ofstream out;
    ifstream in;

    //1. add recodr of 10 employee ot binary file
    out.open ("employee.dat", ios::out | ios::binary);
    cout<<"---Enter Detail of 10 Employee ---\n";
    for(int i =0; i<10; i++){
        cout <<"\n Employee "<<i+1<<":\n";
        emp.input();
        out.write((char *)&emp, sizeof(emp));
    }
    out.close();

    //2. Display all employee record on cosole
    in.open("employee.dat",ios::in|ios::binary);
    cout<<"\n ---all Employee Recoes ---\n";
    cout<<"Id\tName\tSalary\n";
    while(in.read((char* )&emp,sizeof(emp))){
        emp.display();
    }
    in.close();

    //3.search a speciic record by employee Id;
    int searchId;
    bool found = false;
    cout<<"\n enter employee id to search:";
    cin>>searchId;

    in.open("employee.dat",ios::in| ios::binary);
    while(in.read((char*)&emp),sizeof(emp)){
        
    }
}