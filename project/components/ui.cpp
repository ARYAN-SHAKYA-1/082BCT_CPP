#include "../include.cpp"
using namespace std;

int indexUi(){
    system("clear");
    cout<<"******************** WELCOME ******************** "<<endl
         <<"******* To The College Management system ********"<<endl
         <<"(0) Exit"<<endl
         <<"(1) Input"<<endl
         <<"(2) Output"<<endl
         <<"(3) Search"<<endl
         <<"(4) filter"<<endl;
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

//output ui
int outputUi(){
    system("clear");
    int choice;
    cout << "********************* Output *********************" << endl;
    cout << "(0) Exit" << endl;
    cout << "(1) Staff" << endl;
    cout << "(2) Student" << endl;
    cout << "****************************************************" << endl;
    cin >> choice;
    return choice;
}
int staffOutputUi(){
        system("clear");
    cout<<"******************** Output ******************** "<<endl
       <<"(0) Exit"<<endl
       <<"(1) Teacher"<<endl
       <<"(2) Non Teaching Member"<<endl;
    cout<<"************************************************* "<<endl;
     int choice;
     cin>>choice;
     return choice;
}

int searchUi(){
     system("clear");
    int choice;
    cout << "********************* search *********************" << endl;
    cout << "(0) Exit" << endl;
    cout << "(1) Staff" << endl;
    cout << "(2) Student" << endl;
    cout << "****************************************************" << endl;
    cin >> choice;
    return choice;
}
int staffSearchUi(){
          system("clear");
    cout<<"******************** Search ******************** "<<endl
       <<"(0) Exit"<<endl
       <<"(1) Teacher"<<endl
       <<"(2) Non Teaching Member"<<endl;
    cout<<"************************************************* "<<endl;
     int choice;
     cin>>choice;
     return choice;
    
}


int filterUi(){
    system("clear");
    int choice;
    cout << "********************* Filter *********************" << endl;
    cout << "(0) Exit" << endl;
    cout << "(1) Filter Teacher by Salary" << endl;
    cout << "(2) Filter Student by Program" << endl;
    cout << "****************************************************" << endl;
    cin >> choice;
    return choice;
}