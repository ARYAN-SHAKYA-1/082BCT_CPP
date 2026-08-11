/*
Write a program for a library to store information of different books (at least 5 items) in a file
and display them on console.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Book{
    public:
        int id;
        string title;
        float price;

        void input(){
            cout <<" Enter book  Id: ";
            cin >> id;
            cin.ignore();
            cout<<"Enter Titel";
            getline(cin, title);
            cout<<"Enter Price";
            cin>> price;
        }
        void writeToFile(ofstream &out){
            out<<id <<"\n"<<title<<"\n"<< price<<"\n";
        }
        bool readFromFile(ifstream &in){
            if(in>> id){
                in.ignore();
                getline(in,title);
                in>>price;
                return true;
            }
        }
        void display(){
            cout <<id <<"\t"<<price<< endl;
        }
};
int main(){
    Book b;
    ofstream out;
    ifstream in;
    
    //1. wire 5 books to a text file;
    out.open("book.txt",ios::out);
    cout<<"--- Enter Book detail of 5 ---\n";
    for (int i=0; i <5; i++){
        cout<<"\n Book "<<i +1<<":\n";
        b.input();
        b.writeToFile(out);
    }
    out.close();

    //2. Read and display book from text file
    in.open ("book.txt", ios::in);
    cout<<"\n--- book detail from file --- \n";
    cout<<"ID\tTitle\tPrice\n";
    
    while( b.readFromFile(in)){
        b.display();
    }

    in.close();
    return 0;
}

