#include"../include.cpp"
#include"../header.h"
#include "../classes/staff.cpp"
#include "../classes/student.cpp"
#include <vector>

using namespace std;

void teacherOutput(){
    system("clear");

    vector<Teacher> teachers = loadTeacher();
    cout << "ID\tName\tAge\tPhone\tAddress\tExp\tSubject\tSalary\tLeaves" << endl;
    for(size_t i = 0; i < teachers.size(); i++){
        cout << teachers[i].getTid() << "\t" << teachers[i].getName() << "\t"
             << teachers[i].getAge() << "\t" << teachers[i].getPhone() << "\t"
             << teachers[i].getAddress() << "\t" << teachers[i].getExp() << "\t"
             << teachers[i].getSubject() << "\t" << teachers[i].getSalary() << "\t"
             << teachers[i].getNoOfLeaves() << endl;
    }
}

void staffOutput(){
    system("clear");

    vector<NonTeachingStaff> staffList = loadStaff();
    cout << "ID\tName\tAge\tPhone\tAddress\tRole\tExperience\tSalary\tLeaves" << endl;
    for(size_t i = 0; i < staffList.size(); i++){
        cout << staffList[i].getStaffId() << "\t" << staffList[i].getName() << "\t"
             << staffList[i].getAge() << "\t" << staffList[i].getPhone() << "\t"
             << staffList[i].getAddress() << "\t" << staffList[i].getSubject() << "\t"
             << staffList[i].getExp() << "\t" << staffList[i].getSalary() << "\t"
             << staffList[i].getNoOfLeaves() << endl;
    }
}

void studentOutput(){
    system("clear");
    vector<Student> students = loadStudent();
    cout << "ID\tRollNo\tName\tAge\tPhone\tAddress\tProgram\tFees" << endl;
    for(size_t i = 0; i < students.size(); i++){
        cout << students[i].getSid() << "\t" << students[i].getRollNo() << "\t"
             << students[i].getName() << "\t" << students[i].getAge() << "\t"
             << students[i].getPhone() << "\t" << students[i].getAddress() << "\t"
             << students[i].getProgram() << "\t" << students[i].getFees() << endl;
    }
}

void staffOutputMenu(){
    int choice = staffOutputUi();
    switch(choice){
        case 0:
            output();
            break;
        case 1:
            teacherOutput();
            cout<<"******************************"<<endl;
            cin.ignore();
            cin.ignore();
            output();
            break;
        case 2:
            staffOutput();
            cout<<"******************************"<<endl;
            cin.ignore();
            cin.ignore();
            output();
            break;
        default:
            cout << "invalid input. press any key to continue..." << endl;
            cin.ignore();
            cin.ignore();
            staffOutputMenu();
    }
}

void output(){
    int choice = outputUi();
    switch (choice){
        case 0:
            mainChoice();
            break;
        case 1:
            staffOutputMenu();
            cout<<"******************************"<<endl;
            cin.ignore();
            cin.ignore();
            output();
            break;
        case 2:
            studentOutput();
            cout<<"******************************"<<endl;
            cin.ignore();
            cin.ignore();
            output();
            break;
        default:
            cout<<"invalid input. press any key to continue..."<<endl;
            cin.ignore();
            cin.ignore();
            output();
    }
}