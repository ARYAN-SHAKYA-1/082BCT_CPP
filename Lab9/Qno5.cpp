#include<iostream>
#include<cstdlib>
using namespace std;
void progTerm(){
    cout<<"Exception uncaught !"<<endl;
    cout<<"terminating..."<<endl;
    exit (0);
}
int main(){
    cout<<"inside main function!"<<endl;
    try{
        set_terminate(progTerm);
        cout<<"inside try block"<<endl;
        throw 5;
        
    }   catch(float n){
        cout<<"excption caught!"<<endl;
    }
    return 0;
    
}