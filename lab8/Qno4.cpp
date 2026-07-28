/*
Qno4. Wap to illistrute the concept of class template
*/
#include<iostream>
using namespace std;
template <class T>
class funk
{
    T a,b,s;
    public:
       funk()
       {
        a=34;
        b=43.8;
       }
       void sum()
       {
        s=a+b;
       }
       void display()
       {
        cout<<"Sum:"<<s<<endl;
       }
};
int main()
{
    funk <float>a;
    a.sum();
    a.display();
    return 0;
}