/*
qno4
 wap to illustrate the concept of multiple inheriteance
*/
#include <iostream>
using namespace std;
class a{
    protected :
    int Var1;
    public:
    a(){
        Var1 = 12;
    }
};
class b{
    protected:
    int Var2;
    public:
    b(){
        Var2 = 13;
    }
};
class c: public a ,public b
{

public:
   void display(){
    cout<<"var1:"<<Var1<<endl<<"var2:"<<Var2<<endl;
   }
};
int main()
{
    c c1;
    c1.display();
    
}

