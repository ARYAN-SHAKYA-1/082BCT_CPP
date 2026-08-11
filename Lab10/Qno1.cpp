/*
Write a C++ program that prompts the user for text input, saves it to a source file, copies
the contents to a destination file while converting all lowercase letters to uppercase, and finally displays
the contents of the destination file. Use explicit stream objects, the open() function, and explicit file
modes (ios::in, ios::out).
*/

#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main(){
    char ch;

    //1. open source file in ouput mode(write)
    ofstream source;
    source.open("source.txt",ios::out);
    cout <<"Enter Text: ";
    while((ch=cin.get()) != '\n'){
        source.put(ch);
    }
    source.close();

    //2. open souce in inout mide (read) and destination in output mode(write)

    ifstream in;
    ofstream destination;
    in.open("souce.txt",ios::in);
    destination.open("destination.txt",ios::out);
    while (in.get(ch)){
        destination.put(toupper(ch));
    }
    in.close();
    destination.close();

    //3. open destination file in input mode read for display

    ifstream out;
    out.open("destination.txt",ios::in);
    cout<<"\n content of destination file :\n";

    while(out.get(ch)){
        cout<< ch;
    }
    out.close();

    return 0;
}