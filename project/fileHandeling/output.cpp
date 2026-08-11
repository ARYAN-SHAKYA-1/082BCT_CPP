#include"../include.cpp"
#include"../header.h"
#include "../classes/staff.cpp"
#include "../classes/student.cpp"
#include <vector>

using namespace std;

// ---------- Teacher ----------
vector<Teacher> loadTeachers(){
    vector<Teacher> teachers;
    ifstream in("./text/teacher.txt");

    int tid, age, exp, leaves;
    long phone;
    string name, address, subject;
    float salary;

    while(in >> tid >> name >> age >> phone >> address >> exp >> subject >> salary >> leaves){
        Teacher t;
        t.setTid(tid);
        t.setName(name);
        t.setAge(age);
        t.setPhone(phone);
        t.setAddress(address);
        t.setExp(exp);
        t.setSubject(subject);
        t.setSalary(salary);
        t.setLeaves(leaves);
        teachers.push_back(t);
    }

    in.close();
    return teachers;
}

void teacherOutput(){
    system("clear");

    vector<Teacher> teachers = loadTeachers();
    cout << "ID\tName\tAge\tPhone\tAddress\tExp\tSubject\tSalary\tLeaves" << endl;
    for(size_t i = 0; i < teachers.size(); i++){
        cout << teachers[i].getTid() << "\t" << teachers[i].getName() << "\t"
             << teachers[i].getAge() << "\t" << teachers[i].getPhone() << "\t"
             << teachers[i].getAddress() << "\t" << teachers[i].getExp() << "\t"
             << teachers[i].getSubject() << "\t" << teachers[i].getSalary() << "\t"
             << teachers[i].getNoOfLeaves() << endl;
    }
}

// ---------- Non-Teaching Staff ----------
vector<NonTeachingStaff> loadStaff(){
    vector<NonTeachingStaff> staffList;
    ifstream in("./text/staff.txt");

    int staffId, age, experience, leaves;
    long phone;
    string name, address, role;
    float salary;

    while(in >> staffId >> name >> age >> phone >> address >> role >> experience >> salary >> leaves){
        NonTeachingStaff s;
        s.setStaffId(staffId);
        s.setName(name);
        s.setAge(age);
        s.setPhone(phone);
        s.setAddress(address);
        s.setSubject(role);      // note: role uses setSubject() in your class
        s.setExp(experience);
        s.setSalary(salary);
        s.setLeaves(leaves);
        staffList.push_back(s);
    }

    in.close();
    return staffList;
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

// ---------- Student ----------
vector<Student> loadStudents(){
    vector<Student> students;
    ifstream in("./text/student.txt");

    int sid, rollNo, age;
    long phone;
    string name, address, program;
    float fees;

    while(in >> sid >> rollNo >> name >> age >> phone >> address >> program >> fees){
        Student s;
        s.setSid(sid);
        s.setRollNo(rollNo);
        s.setName(name);
        s.setAge(age);
        s.setPhone(phone);
        s.setAddress(address);
        s.setProgram(program);
        s.setFees(fees);
        students.push_back(s);
    }

    in.close();
    return students;
}

void studentOutput(){
    system("clear");
    vector<Student> students = loadStudents();
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