//person class the base class. 
#include<iostream>
using namespace std;
class Person{
 protected:
    string name, address;
    int age,id;
 public:

 //Setters
 void setName(const string& value){
    name=value;
 }
 void setAge(int value){
    age=value;
 }
 void setAddress(const string& value){
   address=value;

 }
 void setId(int value){
    id=value;
 }


 //Getters
 string getName(){
    return(name);
 }
 int getAge(){
    return(age);
 }
 string  getAddress(){
    return(address);
 }
 int getId(){
    return(id);
 }

};
