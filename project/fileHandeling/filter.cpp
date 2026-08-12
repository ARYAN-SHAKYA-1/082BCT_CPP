#include "../include.cpp"
#include "../header.h"


//filters teacher by salary 
void filterBySalary(){
    vector<Teacher> teachers = loadTeacher();
    float salary;

    cout << "Enter salary limit: " << endl;
    cin >> salary;

    bool found = false;

    cout << "ID\tName\tAge\tPhone\tAddress\tExp\tSubject\tSalary\tLeaves" << endl;

    for(size_t i = 0; i < teachers.size(); i++){
        if(teachers[i].getSalary() >= salary){
            cout << teachers[i].getTid() << "\t" << teachers[i].getName() << "\t"
                 << teachers[i].getAge() << "\t" << teachers[i].getPhone() << "\t"
                 << teachers[i].getAddress() << "\t" << teachers[i].getExp() << "\t"
                 << teachers[i].getSubject() << "\t" << teachers[i].getSalary() << "\t"
                 << teachers[i].getNoOfLeaves() << endl; 
            found = true;
        }
    }

    if(!found){
        cout << "No teacher found with salary greater or equal to : " << salary << endl;
    }
}

void filterByProgram(){
    vector<Student> students = loadStudent();
    string program;

    cout << "Enter program to filter by: " << endl;
    cin >> program;

    bool found = false;

    cout << "ID\tRollNo\tName\tAge\tPhone\tAddress\tProgram\tFees" << endl;

    for(size_t i = 0; i < students.size(); i++){
        if(students[i].getProgram() == program){
            cout << students[i].getSid() << "\t" << students[i].getRollNo() << "\t"
                 << students[i].getName() << "\t" << students[i].getAge() << "\t"
                 << students[i].getPhone() << "\t" << students[i].getAddress() << "\t"
                 << students[i].getProgram() << "\t" << students[i].getFees() << endl;
            found = true;
        }
    }

    if(!found){
        cout << "No student found with program: " << program << endl;
    }
}


void filter(){
    int choice = filterUi();
    switch (choice)
    {
    case 0:
        mainChoice();
        break;
    case 1:
        filterBySalary();
        cout<<"******************************"<<endl;
        cin.ignore();
        cin.ignore();
        filter();
        break;
    case 2:
        filterByProgram();
        cout<<"******************************"<<endl;
        cin.ignore();
        cin.ignore();
        filter();
        break;
    default:
        cout<<"invalid input. press any key to continue..."<<endl;
        cin.ignore();
        cin.ignore();
        filter();
        break;
    }
}