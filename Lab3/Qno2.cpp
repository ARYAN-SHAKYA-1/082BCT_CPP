// 2.wap to allocate a menmory dynamlically to an array 
// 
#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr=new int [5];
    for(int i=0;i<5;i++){
        cin>>ptr[i];
    }
    cout<<"display array"<<endl;
    for (int i =0;i<5;i++){
        cout<<ptr[i]<<endl;
    }
    delete ptr;
    return 0;
}