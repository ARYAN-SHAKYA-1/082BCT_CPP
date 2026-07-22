/*
funtion overriding is the ability of a derived class to call its own version of inherted member function. 
ambiguity problem is the confussion when there are same set of member function in both base and derived class and the compiler cannot decide  which function to call. this mainly ocours in hybird in heritance where same funtion ins inherted from multuple paths.
*/
#include <iostream>
using namespace std;
class a{
    public:
    void speak ()
    {
        cout <<"noise";
    }
};
class b:public a{
    public:
    void speak ()
    {
        cout <<"noise";
    }
};
class c:public a{
    public:
    void speak ()
    {
        cout <<"noise";
    }
};
class d :public b, public c{};
int main(){
    d d1;
    d1.speak();
}