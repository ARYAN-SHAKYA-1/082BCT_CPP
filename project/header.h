
// staff.cpp
#pragma once
#include "./classes/person.cpp"
#include <vector>
#include "./classes/student.cpp"
#include "./classes/staff.cpp"



//componets file
//choice.cpp
void mainChoice();

//ui,cpp
int indexUi();
int inputUi();
int staffInputUi();
int outputUi();
int staffOutputUi();
int searchUi();
int staffSearchUi();
int filterUi();


//filehandelling
//input.cpp
void input();
void staffInput();

//output.cpp
void output();
void filter();


vector<Student> loadStudent();
vector<Teacher> loadTeacher();
vector<NonTeachingStaff> loadStaff();
void searchTeacherByName();
void searchStudentByRollNo();
void searchStaffByRole();
void search();
void searchStaff();
void filterBySalary();
void filterByProgram();

