/*
4)
create a class employee with data member name salary title, overload the 
unary opreator ++ to increment the salary of emplyee by 200000
*/

#include<iostream>
using namespace std;
class Employee{
    private:
        char name[20], title[20];
        float salary;
    public:
        void operator ++(){
            salary+=200000;
        }
        void input(){
            cin>>name>>salary>>title;
        }
        void dispay(){
            cout<<"Name : "<<name<<endl<<"Title : "
            <<title<<endl<<"Salary : "<<salary<<endl ;
        }
};
int main(){
    Employee E1;
    E1.input();
    ++E1;
    E1.dispay();
    return 0;
}
