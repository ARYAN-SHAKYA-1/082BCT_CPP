/*
5)
create a class named distance with data member kilometer , meter and centimeter. 
Overload the realtional operator (>=) to compar two distance object
*/

#include <iostream>
using namespace std;

class Distance
{
    private :
        int km,m,cm;
    public:
        Distance(){
            km=0;
            m=0;
            cm=0;
        }
        Distance(int k, int meter, int c){
            km =k;
            m=meter;
            cm=c;
        }
       bool operator >=(Distance d){

            Distance temp1,temp2;
            temp1.cm=d.cm+d.m*100+d.km*10000;
            temp2.cm=cm+m*100+km*10000;
            return (temp2.cm > temp1.cm);
        }
};
int main(){
    Distance d1(1,50,30),d2(2,10,10);
    if(d1>=d2){
        cout<<"distance 1 is greter or equal";
    }
else{
        cout<<"distance 2 is greter";
    }
}