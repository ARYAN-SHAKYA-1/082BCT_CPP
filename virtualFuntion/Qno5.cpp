/*
wap  to illustrate to concpeto f of reinterpret_cast
*/
#include<iostream>
using namespace std;
 int main(){
    int a = 65, *iptr=&a;
    char ch = 'c', *cptr = &ch;
    cptr = reinterpret_cast <char *> (iptr);
    cout <<"the valut at cptr = "<<*cptr<<endl;
    return 0;
 }