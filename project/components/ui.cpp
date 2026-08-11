#include "../include.cpp"
using namespace std;

int indexUi(){
    system("clear");
    cout<<"******************** WELCOME ******************** "<<endl
         <<"******* To The College Management system ********"<<endl
         <<"(0) Exit"<<endl
         <<"(1) Input"<<endl;
    cout<<"************************************************* "<<endl;
    int choice;
    cin>>choice;
    return choice;
}

int inputUi(){
    system("clear");
    cout<<"******************** Input ******************** "<<endl
           <<"(0) Exit"<<endl
           <<"(1) Staff"<<endl
           <<"(2) Student"<<endl;
     cout<<"************************************************* "<<endl;
     int choice;
     cin>>choice;
     return choice;
}

int staffInputUi(){
        system("clear");
    cout<<"******************** Input ******************** "<<endl
       <<"(0) Exit"<<endl
       <<"(1) Teacher"<<endl
       <<"(2) Non Teaching Member"<<endl;
    cout<<"************************************************* "<<endl;
     int choice;
     cin>>choice;
     return choice;
}