/*
qno 3
wap with class cricketer that has data meber to represent name , age and number of matches played. from this class crickter deriver two class bowler and batsman. the bowler class should have number of wickes as data member and batsman class should have no of runs and no of centries as data member. use appropriate meber funtion in clss to make the progrqam meaningful.
*/ 
#include <iostream>
using namespace std;
class crickter{
    protected:
        char name[50];
        int age, matchs;
    public:
    void input(){
        cout<<"enter name age and  no of matches played";
        cin>>name>> age>>matchs;
    }

};
class bowler: public crickter{
    private:
        int wickets;
    public:
        void setWickets(){
         cout<<"enter the number of wicktes";
         cin>> wickets;
        }
        void display(){
            cout<<"Name:"<<name<<endl<<"age:"<<age<<endl<<"matches played:"<<matchs<<endl<<"wickets:"<<wickets<<endl;
        }
};
class batsman: public crickter{
    private:
        int runs;
    public:
        void setRuns(){
            cout<<"enter the number of runs ";
         cin>> runs;
        }
        void display(){
            cout<<"Name:"<<name<<endl<<"age:"<<age<<endl<<"matches played:"<<matchs<<endl<<"runs:"<<runs<<endl;
        }
};
int main(){
    batsman b1;
    bowler b2;
    b1.input();
    b1.setRuns();
    b2.input();
    b2.setWickets();
    b1.display();
    b2.display();
}