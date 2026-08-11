#include "./person.cpp"
using namespace std;

class Staff:public Person{
    protected:
    float salary;
    int noOfLeaves;
    public:

    //pure virtual funtion
    virtual void takeLeave()=0;
    //default construcots
    Staff(){
        noOfLeaves =0;
    }

    //setters
    
    void setSalary(float value){
        salary= value;
    }
    void setLeaves(int value){
        noOfLeaves=value;
    }

    //Getters
    float getSalary(){
        return (salary);
    }

    int getNoOfLeaves(){
        return (noOfLeaves);
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

    //leave funtion
    void takeLeave(){
        noOfLeaves++;
        salary-=(0.5*salary);
    }

};

class NonTeachingStaff:public Staff{

    protected:
    string role;
    int experience ,staffId;
    public:

    //setters
    void setSubject( const string& value){
        role= value;
    }
  
    void setExp(int value){
        experience = value;
    }
    void setStaffId(int value){
        staffId = value;
    }
    //Getters

    string getSubject(){
        return (role);
    }
    int getExp(){
        return (experience); 
    }
    int getStaffId(){
        return(staffId);
    }

    //leave funtion
    void takeLeave(){
        noOfLeaves++;
        salary-=(0.2*salary);
    }

};