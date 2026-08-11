//standard library
#include"../include.cpp"
#include"../header.h"
//linking other filsse.
// #include "../classes/student.cpp"
#include "../classes/teacher.cpp"


using namespace std;

void input(){
    int choice=inputUi();
    switch (choice){
        case 0:
        mainChoice();
        break;
        case 1:
        staffInput();
        break;
        case 2:
        {   
        char stop;
        do{
        teacherInput();
        cout<<"Enter 'N' to stop";
        cin.ignore();
        cin.get(stop);
    }
    while(stop !='N');
    input();
        
    }
        default:
        cout<<"invalid input. press any key to continue..."<<endl;
        cin.ignore();
        cin.ignore();
        input();
        
    }
}

void teacherInput();

void staffInput(){
    int choice = staffInputUi();
    switch (choice)
    {
    case 0:
        input();
        break;
    case 1:
    {   
        char stop;
        do{
        teacherInput();
        cout<<"Enter 'N' to stop";
        cin.ignore();
        cin.get(stop);
    }
    while(stop !='N');
    input();
        
    }
        break;
    
    default:
        break;
    }

}

int getNextId(){
    ifstream in("./text/teacher.txt");
    int maxId = 0;
    int currentId;
    string rest;   // to skip the rest of the line

    while(in >> currentId){
        getline(in, rest);   // consume rest of that line so next loop reads a fresh id
        if(currentId > maxId){
            maxId = currentId;
        }
    }

    in.close();
    return maxId + 1;
}


void teacherInput(){
    Teacher t1;
    string name, address,subject;
    float salary;
    int  age, exp,tid,leaves;
    long phone;
    ofstream out;

    out.open("./text/teacher.txt",ios::app);

    if(!out.is_open()){
        exit (1);
    }

    tid = getNextId();
    cout<<"Enter teacher id number:"<<tid<<endl;
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Age"<<endl;
    cin>> age;
    cout<<"Enter phone number "<<endl;
    cin>> phone;
    cout<<"Enter addrerss"<<endl;
    cin>> address;
    cout<<"Enter experience"<<endl;
    cin>> exp;
    cout<<"Enter subject"<<endl;
    cin>>subject;
    cout<<"Enter salary"<<endl;
    cin>>salary;
    cout<<"Enter leaves"<<endl;
    cin>>leaves;

    out<<tid<< "\t"<<name<< "\t"<<age<< "\t"<<phone<< "\t"<<address<< "\t"<<exp<< "\t"<<subject<< "\t"<<salary<<"\t"<<leaves<<endl;
}


void studentInput(){
    int rollNo, age,sid;
    float fees;
    string program, name, address;
    long phoneNumber;
    ofstream out;

    out.open("./text/student.txt", ios::app);

    if(!out.is_open()){
        exit(1);
    }

    sid = getNextId();
    cout<<"Enter student id number"<<sid<<endl;
    cout<<"Enter student roll number"<<endl;
    cin>> rollNo;
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Age"<<endl;
    cin>> age;
    cout<<"Enter phone number "<<endl;
    cin>> phoneNumber;
    cout<<"Enter addrerss"<<endl;
    cin>> address;
    cout<<"Enter program"<<endl;
    cin>> program;
    cout<<"Enter fees"<<endl;
    cin>> fees;

    out<<sid<< "\t"<<rollNo<< "\t"<<name<< "\t"<<age<< "\t"<<phoneNumber<< "\t"<<address<< "\t"<<program<< "\t"<<fees<<endl;
}