#include "./staff.cpp"

class Teacher:public Staff{

    protected:
    string subject;
    int experience;
    public:

    //setters
    void setSubject( const string& value){
        subject= value;
    }
  

    void setExp(int value){
        experience = value;
    }
    //Getters

    string getSubject(){
        return (subject);
    }
    int getExp(){
        return (experience);
    }

};