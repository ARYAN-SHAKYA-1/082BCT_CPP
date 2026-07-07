
/*
Qno8
Create a class Time with data member hr, in , sec . overload the relational operator (>=) to comare two time object
 */
#include<iostream>
using namespace std;
class TIME
{
    int hr,min,sec;
    public:
    void gettime()
    {
        cout<<"Enter time in hr,min,sec format: ";
        cin>>hr>>min>>sec;
    }
    bool operator >=(TIME t)
    {
        // if(hr>t.hr)
        // return true;
        // else if(hr==t.hr && min>t.min)
        // return true;
        // else if(hr==t.hr && min==t.min && sec>=t.sec)
        // return true;
        // else
        // return false;
        TIME temp1,temp2;
        temp1.sec =sec+min*60+hr*3600;
        temp2.sec =t.sec+t.min*60+t.hr*3600;
        return (temp1.sec >= temp2.sec);

    }
};
int main()
{
    TIME t1,t2;
    t1.gettime();
    t2.gettime();
    if(t1>=t2){
        cout<<"Time 1 is greater than or equal to Time 2";
    }
    else
    {
        cout<<"Time 1 is less than Time 2";
    }
    return 0;
}