/*
wap to create a class employee. Now create class manager which is derived from emplyee. Show the use of virtual funtion with suitable data member and member funtion
*/
#include<iostream>
using namespace std;
class employee{
    private:
    float salary ;
    char name[20];
    public:
    virtual void isFired(bool fired){};
};
class manager:public employee{
    public:
    void isFired(bool fired){
        if (fired){
            cout<<"performance was bad";
        }
        else{
            cout<<"you are doing good keep it up";
        }
    }
};
int main(){
    employee *mptr;
    manager mngr;
    mptr= &mngr;
    mptr->isFired(false);
    return 0;
}