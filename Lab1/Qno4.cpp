// Q4. Write a program to create a class name STUDENT with data members rollno,
// address, name.Create two member functions input(), and display(), to take the
// details of 5 students and display it.


#include<iostream>
using namespace std;

class STUDENT{
    private:
    int rollNo;
    char address[20];
    char name[20];
    public:
    void input(int i){
        cout<<"enter name roll no and address of student"<<i<<endl;
        cin>>name>>rollNo>>address;
    }
    void display(){
        cout<<"name:"<<name<<"roll no: "<<rollNo<<"address: "<< address<<endl;
    }
};
int  main(){
    int i;
    STUDENT students[5];
    for (i =0;i<5;i++){
        students[i].input(i);
    }
    for ( i = 0; i < 5; i++){
        students[i].display();    
    }
    return 0;
}