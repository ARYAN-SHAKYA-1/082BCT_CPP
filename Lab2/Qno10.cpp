// Q10. Assume that an object represents an employee report that 
// contains the information like employee id, total bonus, total 
// overtime in a particular year. Use an array of objects to represent 
// employees' reports. Write a program that displays reports. Use setpara() 
// member function to set report attributes by passing the arguments and member 
// function displayreport() to show the reports according to parameters passed. 
// Display the report in the following format.
// Employee with ........ 
// has received Rs ........ 
// as bonus and had worked ........ 
// hours as an over time in year ........

#include<iostream>
using namespace std;

class employee
{
    int employeeId,totalBonus,totalOvertime;
    public:
    void setEmployeeId(int x){
        employeeId=x;
    }
    void setTotalBonus(int x){
        totalBonus=x;
    }
    void setTotalOvertime(int x){
        totalOvertime=x;
    }
    void displayreport(){
        cout<<"employee id ="<<employeeId<<endl
        <<"totla over time ="<<totalOvertime<<endl
        <<"total bonus="<<totalBonus<<endl;
    }
};
int main(){
    int x,y,z;
    employee e[5];
    for (int i = 0; i < 5; i++)
    {   
        cin>>x>>y>>z;
        e[i].setEmployeeId(x);
        e[i].setTotalBonus(y);
        e[i].setTotalOvertime(z);
    }
    for (int i = 0; i < 5; i++)
    {
        e[i].displayreport();
    }
    
    
}
