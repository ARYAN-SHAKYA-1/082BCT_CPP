#include "./person.cpp"

class Student{
    protected:
     int rollNo, sid;
     float fees;
     string program;
    public:

    //Setters
     void setRollNo(int value){
        rollNo=value;
     }
     void setProgram(const string& value ){
        program=value;
     }
     void setFees(float value){
        fees= value;
     }
      void setSid(int value){
        sid= value;
     }

    //Getters
     int getRollNo(){
        return (rollNo);
     }

     string getProgram(){
        return (program);
     }

     float getFees(){
        return (fees);
     }
     int getSid(){
        return (sid);
     }
};