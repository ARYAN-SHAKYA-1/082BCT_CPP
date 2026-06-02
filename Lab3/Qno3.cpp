#include<iostream>
using namespace std;
class employee
{
    int salary;
    char name[50];
    public:
        void input()
        {
            cout<<"enter salary and name of employee";
            cin>>salary>>name;
        }
        void display()
        {
            cout<<"Name:"<<name<<"Salary:"<<salary;
        }
};
int main()
{
    employee *e = new employee;
    e.input();
    e.output()
    delete e;
    return 0;
}