// Q9. Write the program to illustrate the concept of static 
// data members and static member function(Do the example 
// done in the class notes).

#include<iostream>
using namespace std;

class student{
    int rollNo;
    static int count;
    public:
    void setRollNo(){
        count++;
        rollNo=count;
    }
    void display(){
        cout<<"roll number:"<<rollNo;
    }
    static void displayCount(){
        cout<<"count ="<<count;
    }
};
int student::count =0;
int main(){
    student s1,s2,s3;
    s1.setRollNo();
    s2.setRollNo();
    s3.setRollNo();
    s1.display();
    s2.display();
    s3.display();
    return 0;

}