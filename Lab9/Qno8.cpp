//wap to illiustrate the concept of handling unexpection expection
#include<iostream>
#include<cstdlib>
using namespace std;
void progterm()
{
    cout<<"unexpected exception!"<<endl;
    cout<<"terminating..."<<endl;
    exit(0);
}
int main() throw(int,float)
{
    cout<<"inside main"<<endl;
    try
    {
        set_unexpected(progterm);
        cout<<"inside try bolck"<<endl;
        throw 'z';
    }
    catch(int a)
    {
        cout<<"int exception caught"<<endl;
    }
    catch(float a)
    {
        cout<<"float exception caught"<<endl;
    }
    return 0;
}