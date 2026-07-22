#include<iostream>
using namespace std;
template <class T1, class T2,  class T3>
void caclulatesize(T1 a, T2 b ,T3 c){
cout<<"size of a"<<sizeof(a)<<"bytes"<<endl;    
cout<<"size of b"<<sizeof(b)<<"bytes"<<endl;
cout<<"size of c"<<sizeof(c)<<"bytes"<<endl;    
}
int main(){
    caclulatesize(1,5.67,'z');
    return 0;
}