#include<iostream>
using namespace std;
class add
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter a numbers: ";
        cin>>a;
    }
    void display()
    {
        cout<<"Sum of the is numbers is: "<<a;
    }
    friend add operator + (add a1, add a2); 
};
add operator + (add a1, add a2)
{
    add temp;
    temp.a=a1.a+a2.a;
    return temp;
}
int main()
{
    add a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3=a1+a2;
    a3.display();
    return 0;
}