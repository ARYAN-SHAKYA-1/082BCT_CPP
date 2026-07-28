/*
create a abstract class polygon with lenght and height as its data member. Make area() a pure virutl funtion and redeine it in derived class triangle and rectangle to claculate the respective area. your progra, should demonstrate the runtime polymoism.
*/
#include<iostream>
using namespace std;
class polygon
{
protected:
    float  lenght , height;
public:
    virtual void area() =0;
    void input(){
        cin>>lenght>>height;
    }
};
class rectangle: public polygon{
public :
void area()
{
    cout<<"area of rectangle "<<lenght * height<<endl; 
}
};
class triangle: public polygon
{
public:
  void area(){
    cout<<"area of traingle "<< 0.5*lenght*height<<endl;
  }
};
int main(){
    polygon *rptr,*tptr;
    rectangle r1;
    triangle t1;
    rptr = &r1;
    tptr = &t1;
    rptr ->input();
    tptr ->input();
    rptr->area();
    tptr->area();
    return 0;
}

