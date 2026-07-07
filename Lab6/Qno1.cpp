/*
Qno1
wap to create a base class rectange that takes input (lenght, breadth).Derive a child class claculate ot find the area and perimeter of rectange
*/
#include <iostream>
using namespace std;

class Rectangle{
    protected:
    int lenght , breadth;
    public:
    void input(){
        cout<<"enter lenght and breadth:";
        cin>>lenght>>breadth;
    }
};
class calculate : public Rectangle{
    public:
    int area(){
        return (lenght * breadth);
    }
    int preimeter(){
        return (2*(lenght+breadth));
    }
    
};
int main(){
    calculate calc1;
    calc1.input();
    cout<< "area:" << calc1.area()<< endl<< "perimeter: "<<calc1.preimeter()<< endl;
}