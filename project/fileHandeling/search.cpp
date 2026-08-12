#include "../include.cpp"
#include "../header.h"
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
    in.open("./text/teacher.txt",ios::in);
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

vector<NonTeachingStaff> loadStaff(){
    vector<NonTeachingStaff> staffs;
    ifstream in;
    in.open("./text/staff.txt",ios::in);
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


void searchTeacherByName(){
    vector<Teacher> teachers = loadTeacher();
    string subject;

    cout << "Enter teacher name to search: " << endl;
    cin >> subject;

    bool found = false;

    cout << "ID\tName\tAge\tPhone\tAddress\tExp\tSubject\tSalary\tLeaves" << endl;

    for(size_t i = 0; i < teachers.size(); i++){
        if(teachers[i].getSubject() == subject){
            cout << teachers[i].getTid() << "\t" << teachers[i].getName() << "\t"
                 << teachers[i].getAge() << "\t" << teachers[i].getPhone() << "\t"
                 << teachers[i].getAddress() << "\t" << teachers[i].getExp() << "\t"
                 << teachers[i].getSubject() << "\t" << teachers[i].getSalary() << "\t"
                 << teachers[i].getNoOfLeaves() << endl;
            found = true;
        }
    }

    if(!found){
        cout << "No teacher found with name: " << subject << endl;
    }
}

void searchStudentByRollNo(){
    vector<Student> students = loadStudent();
    int roll;

    cout << "Enter roll number to search: " << endl;
    cin >> roll;

    bool found = false;

    cout << "ID\tRollNo\tName\tAge\tPhone\tAddress\tProgram\tFees" << endl;

    for(size_t i = 0; i < students.size(); i++){
        if(students[i].getRollNo() == roll){
            cout << students[i].getSid() << "\t" << students[i].getRollNo() << "\t"
                 << students[i].getName() << "\t" << students[i].getAge() << "\t"
                 << students[i].getPhone() << "\t" << students[i].getAddress() << "\t"
                 << students[i].getProgram() << "\t" << students[i].getFees() << endl;
            found = true;
        }
    }

    if(!found){
        cout << "No student found with roll number: " << roll << endl;
    }
}

void searchStaffByRole(){
    vector<NonTeachingStaff> staffList = loadStaff();
    string role;

    cout << "Enter role to search: " << endl;
    cin >> role;

    bool found = false;

    cout << "ID\tName\tAge\tPhone\tAddress\tRole\tExperience\tSalary\tLeaves" << endl;

    for(size_t i = 0; i < staffList.size(); i++){
        if(staffList[i].getSubject() == role){   // note: role uses getSubject() in your class
            cout << staffList[i].getStaffId() << "\t" << staffList[i].getName() << "\t"
                 << staffList[i].getAge() << "\t" << staffList[i].getPhone() << "\t"
                 << staffList[i].getAddress() << "\t" << staffList[i].getSubject() << "\t"
                 << staffList[i].getExp() << "\t" << staffList[i].getSalary() << "\t"
                 << staffList[i].getNoOfLeaves() << endl;
            found = true;
        }
    }

    if(!found){
        cout << "No staff found with role: " << role << endl;
    }
}
void searchStaff();

void search(){
    int choice = searchUi();
    switch (choice)
    {
    case 0:
        mainChoice();
        break;
    case 1:
        searchStaff();
        cout<<"******************************"<<endl;
        cin.ignore();
        cin.ignore();
        search();
        break;
    case 2:
        searchStudentByRollNo();
        cout<<"******************************"<<endl;
        cin.ignore();
        cin.ignore();
        search();
        break;

    
    default:
        cout<<"invalid input. press any key to continue..."<<endl;
        cin.ignore();
        cin.ignore();
        search();
        break;
    }
}

void searchStaff(){
    int choice = staffSearchUi();
    switch (choice)
    {
    case 0:
        search();
        break;
    case 1:
        searchTeacherByName();
        cout<<"******************************"<<endl;
        cin.ignore();
        cin.ignore();
        search();
        break;
    case 2:
        searchStaffByRole();
        cout<<"******************************"<<endl;
        cin.ignore();
        cin.ignore();
        search();
        break;

    
    default:
        break;
    }

}

