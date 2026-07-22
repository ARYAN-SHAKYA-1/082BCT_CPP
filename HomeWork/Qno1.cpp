/*
syntax for operator overloatding for various cases using non  member functions 
uinary
class class_name{
public:
friend return_type operator operator_symbol (class obj1,class obj2);
};
return_type operator operator_symbol (class obj1,class obj2){
    //body of funtion
}
*/
#include<iostream>
#include<string.h>
using namespace std;
class City
{
    private:
    char cityName[20];
    float distFromKtm;
    public:
    
    void setCity(){
     cin>>cityName;
    }
    void retriveCity(){
     cout<<cityName;
    }
    void setDist(){
     cin>>distFromKtm;
    }
    float retriveDist(){
     return(distFromKtm); 
    }
    City operator +(City c1){
        City temp;
        strcpy(temp.cityName,cityName);
        strcat(temp.cityName," to ");
        strcat(temp.cityName,c1.cityName);
        temp.distFromKtm= distFromKtm+c1.distFromKtm;
        return (temp);
    }
};
int main(){
    City c1,c2,c3;
    c1.setCity();
    c1.setDist();
    c2.setCity();
    c2.setDist();
    c3= c1+c2;
    c3.retriveCity();
    cout<<endl<<c3.retriveDist();

}