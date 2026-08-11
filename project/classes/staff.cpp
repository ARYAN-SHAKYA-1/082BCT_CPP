#include "./person.cpp"
using namespace std;

class Staff:public Person{
    protected:
    float salary;
    int noOfLeaves;
    bool isTeacher;
    public:
    //default construcots
    Staff(){
        noOfLeaves =0;
    }

    //setters
    void setTeacher(bool value){
        isTeacher=value;
    }
   
    void setSalary(float value){
        salary= value;
    }
     bool getTeacher(){
        return isTeacher;
    }

    //Getters
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