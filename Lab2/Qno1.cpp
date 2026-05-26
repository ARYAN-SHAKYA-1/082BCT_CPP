#include<iostream>
using namespace std;

class TIME
{
	private:
		int hr,min,sec;
	public:
		TIME()
		{
			hr=0;
			min=0;
			sec=0;
		}
		TIME(int a, int b, int c)
		{
			hr=a;
			min=b;
			sec=c;
		}
		TIME addTime(TIME t1,TIME t2)
		{
			TIME t;
			t.sec=t1.sec+t2.sec;
			t.min=t1.min+t2.min+t.sec/60;
			t.hr=t1.hr+t2.hr+t.min/60;
			t.sec=t.sec%60;
			t.min=t.min%60;	
			return t;
		}
		void display()
		{
			cout<<"time is="<<hr<<":"<<min<<":"<<sec<<endl;
		}
};
int main()
{
	TIME t1(1,30,55),t2(2,45,60),t3;
	t3=t3.addTime(t1,t2);
	t3.display();
	return 0;
}