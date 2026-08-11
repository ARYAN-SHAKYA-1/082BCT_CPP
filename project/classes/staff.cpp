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

class Teacher:public Staff{

    protected:
    string subject;
    int experience ,tid;
    public:

    //setters
    void setSubject( const string& value){
        subject= value;
    }
  
    void setExp(int value){
        experience = value;
    }
    void setTid(int value){
        tid = value;
    }
    //Getters

    string getSubject(){
        return (subject);
    }
    int getExp(){
        return (experience); 
    }
    int getTid(){
        return(tid);
    }

};

class NonTeachingStaff:public Staff{

    protected:
    string subject;
    int experience ,tid;
    public:

    //setters
    void setSubject( const string& value){
        subject= value;
    }
  
    void setExp(int value){
        experience = value;
    }
    void setTid(int value){
        tid = value;
    }
    //Getters

    string getSubject(){
        return (subject);
    }
    int getExp(){
        return (experience); 
    }
    int getTid(){
        return(tid);
    }

};