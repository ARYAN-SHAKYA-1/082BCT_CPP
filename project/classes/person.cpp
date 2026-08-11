//person class the base class. 
#ifndef PERSON_CPP
#define PERSON_CPP

#include "../include.cpp"
class Person{
 protected:
    string name, address;
    int age;
    long phoneNumber;
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

 void setPhone(long value){
    phoneNumber=value;
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

 long getPhone(){
   return(phoneNumber);
 }

};
#endif