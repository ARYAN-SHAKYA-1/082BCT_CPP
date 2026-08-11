#include "./person.cpp"
using namespace std;

class Staff:public Person{
    protected:
    float salary;
    int noOfLeaves;
    bool isTeacher;
    public:

    Staff(){
        noOfLeaves =0;
    }

    void setTeacher(bool value){
        isTeacher=value;
    }
    bool getTeacher(){
        return isTeacher;
    }
    void setSalary(float value){
        salary= value;
    }
    float getSalary(){
        return (salary);
    }

    int getNoOfLeaves(){
        return (noOfLeaves);
    }
    void takeLeave(){
        noOfLeaves++;
        if(isTeacher){
            salary-=(0.5*salary);
        }
        else{
            salary-=(0.2*salary);
        }
    }
};