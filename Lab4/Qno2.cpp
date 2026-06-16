/*
2)
create a class "Distance" with data member feet and inch.
Overload the binary + operator to add two distance object.
 */


#include<iostream>
using namespace std;
class Distance
{
private:
    int ft ,in;
public:
    Distance(){
        ft=0;
        in=0;
    }
    Distance(int f, int i){
        ft=f;
        in=i;
    }
    Distance operator*(Distance t){
        Distance temp;
        temp.in=in-t.in;
        temp.ft=ft-t.ft +temp.in/12;
        temp.in%=12;
        return temp;
    }
    void display(){
        cout<<"Feet: "<<ft<<" Inch: "<<in<<endl;
    }
};
int main(){
    Distance d1(2, 5), d2(1, 3), d3;
    d3=d1*d2;
    d3.display();
}