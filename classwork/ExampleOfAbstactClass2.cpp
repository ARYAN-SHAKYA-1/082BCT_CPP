/*
wap in cpp to illustrate the concept of virtual destructor
*/
#include<iostream>
using namespace std;
class  base
{
    public:
    virtual ~base()
    {
        cout<<"destroying the base class object ..."<<endl;
    }
};
class derv: public base
{
    public:
    ~derv()
    {
        cout<<"destroying derived class object ..."<<endl;
    }
};
int main(){
    base *bptr= new derv;
    delete bptr;
    return 0;
}
