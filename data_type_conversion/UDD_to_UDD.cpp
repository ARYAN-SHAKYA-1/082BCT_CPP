#include <iostream>
using namespace std;
class minute;
class second{
    int s;
    public:
    second(){
        s=0;
    }
    second(int min){
        s=min;
    }
    void display(){
        cout<<"second:"<<s<<endl;
    }
};
class  minute{
    int m;
    public:
    void input(){
        cin>>m;
    }
    operator second(){
        int s = m*60;
        return second(s);
    }
};
int main()
{
    minute m;
    second s;
    m.input();
    s = m;
    s.display();
}