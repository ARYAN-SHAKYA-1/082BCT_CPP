#include "./staff.cpp"

class Teacher:public Staff{

    protected:
    string subject;
    int experience;
    public:
    void setSubject( const string& value){
        subject= value;
    }
    string getSubject(){
        return (subject);
    }

     void setExp(int value){
        experience = value;
    }
    int getExp(){
        return (experience);
    }

};