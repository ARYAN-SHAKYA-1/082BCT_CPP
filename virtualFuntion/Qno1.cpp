/*
Create base class named shape, it should have pure virtual funtion named draw().now derived class named circle, rectangle and square each with its own draw () . now use base class pointer to call the funtion of derived class. for eg when base class pointer is ued to call draw of suare it should prom sqrawn drawn
*/
#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw() = 0;
};
class circle :public shape{
    public:
    void draw()
    {
        cout<<"drawn circle"<<endl;
    }
};
class
rectangle:public shape{
    public:
    void draw()
    {
        cout<<"drawn rectangle"<<endl;
    }
};
class square:public shape{
    public:
    void draw()
    {
        cout<<"drawn square"<<endl;
    }
};

int main(){

shape *cptr,*rptr,*sptr;
circle c1;
rectangle r1 ;
square s1 ;

cptr = &c1;
rptr = &r1;
sptr = &s1;


cptr->draw();
rptr->draw();
sptr->draw();
return 0;
}
