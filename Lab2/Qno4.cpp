//  Q4. Create a class called information to store the name and address of a student.
// Store the information of two students and swap the value of two objects. 
#include<iostream>
using namespace std;

class information{
    char name[50],address[50];
    public:
    void input()
    {
        cin>>name >> address;
    }
    void  swapdata(information &i1,information &i2)
    {
        information temp;
        temp=i1;
        i1=i2;
        i2=temp;

    }
    void display()
    {
        cout<<"name:"<<name<<" address:"<<address<<endl;
    }
};
int main(){
    information i1,i2;
    i1.input();
    i2.input();
    cout<<"before swap "<<endl;
    i1.display();
    i2.display();
    i1.swapdata(i1,i2);
    cout<<"after swap"<<endl;
    i1.display();
    i2.display();
    return 0;

}