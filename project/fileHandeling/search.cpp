#include"../include.cpp"
#include "./header.h"

#include "../classes/student.cpp"
#include "../classes/staff.cpp"

#include <vector>
vector<Student> loadStudent(){  //this ois a funtion that returns a vector that hold data simillat to the student class.
    vector<Student> students;
    ifstream in;
    in.open("./text/student.txt",ios::in);
    if(!in.is_open()){
        cout<<"error in opening file";
        cin.ignore();
        cin.ignore();
        mainChoice();
    }
    string name, address, program;
    int sid,roll, age;
    float fees;
    long phone;
    while(in>>sid>>roll>>name>>age>>phone>>address>>program>>fees){
        Student s;
        s.setSid(sid);
        s.setRollNo(roll);
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
vector<Teacher> loadTeacher(){
    vector<Teacher> teachers;
    ifstream in;
    in.open("../text/teacher.txt",ios::in);
    if(!in.is_open()){
        cout <<"error in opening file ";
        cin.ignore();
        cin.ignore();
        mainChoice();
    } 
    string name, address, subject;
    float salary;
    int age, exp, tid, leaves;
    long phone;
    while(in>>tid>>name>>age>>phone>>address>>exp>>subject>>salary>>leaves){
        Teacher t;
        t.setTid(tid);
        t.setName(name);
        t.setAge(age);
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

vector<NonTeachingStaff> loadStaff(){
    vector<NonTeachingStaff> staffs;
    ifstream in;
    in.open("../text/staff.txt",ios::in);
    if(!in.is_open()){
        cout <<"error is opeing file";
        cin.ignore();
        cin.ignore();
        mainChoice();
    }
    int staffId, age, experience, leaves;
    long phone;
    string name, address, role;
    float salary;
    while(in>>staffId>>name>>age>>phone>>address>>role>>experience>>salary>>leaves){
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
        staffs.push_back(s);
    }
    in.close();
    return staffs;

}