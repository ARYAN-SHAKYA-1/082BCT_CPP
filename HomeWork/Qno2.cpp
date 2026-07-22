// there are many type of stat conversion  in c++ some are

// 1 basic to basic data conversion
// syntax
// data_type var1 = value1;
// data_type2 var2 = var1;
//example
#include <iostream>
using namespace std;
int main(){
    float a = 12.9;
    int b = a;
    cout <<b;//out put = 12
}
//2 badic to user defined; it can be obtaing thorugh constructor function;
class conversion{
    int a;
    public:
    conversion(){
        a=0;
    }
    conversion(int b){
     a=b;
    }
    void displayA(){
        cout <<a;
    }
};
void basicToUDD(){
 int a= 10;
 conversion c;
 c=a;
 c.displayA();
}
//3 user defined data type to basic:it can be obtained by operator function
class UDD_to_basic{
 int min;
 public:
 void input(){
    cin >> min;
 }
 operator float  ()
    {
        float hr = min /60;
        return hr;
    }
};
//4 user defined data type to user defined data type
class destination;
class source{
    float f;
    public:
    source (){
        f =0;
    }
    source(float f1){
        f=f1;
    }
};
class destination{
 float c;
 public:
 void input(){
    cin>>c;
 }
 operator source(){
    float f1 = (c*9/5)+32;
    return (source (f1));
 }
};