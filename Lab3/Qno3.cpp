// 3. create a class name employee withdata member name and salary.
// dymanlically allocate memory for object create two function input 
// and dispay to take input and disply the details of employee

#include<iostream>
using namespace std;

class Employee{
    float Salary;
    char name [50];
    public:
    void input(){
        cin>>name>>Salary;
    }
    void display(){
        cout<<"name: "<<name<<" salary: "<<Salary <<endl;
    }
};
int main(){
    Employee *E1;
    E1 = new Employee;
    E1->input();
    E1->display();
    return 0;
} 