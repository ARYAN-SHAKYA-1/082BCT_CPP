#include<iostream>
using namespace std;
class source_USD;
class destination_NRP{
    private:
    int nrp;
    public:
    destination_NRP(){
        nrp=0;
    }
     destination_NRP(float usd){
        nrp=usd;
    }
    void display(){
        cout << nrp;
    }
};
class source_USD{
    private:
     int usd;
    public:
    void input(){
        cin>> usd;
    }
     operator destination_NRP(){
        float nrp = usd*153.59 ;
        return nrp;
     }
};
int main(){
    source_USD p1;
    destination_NRP p2;
    p1.input();
    p2= p1;
    p2.display();
}