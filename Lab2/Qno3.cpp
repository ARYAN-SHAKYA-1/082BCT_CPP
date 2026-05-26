#include<iostream>
using namespace std;

class DISTANCE
{
	private:
		int in,ft;
	public:
		DISTANCE()
		{
			in=0;
			ft=0;
		}
		DISTANCE(int a, int b)
		{
			in=a;
			ft=b;
		}
		DISTANCE calc(DISTANCE c1,DISTANCE c2)
		{
			COMP c;
			c.in=c1.in+c2.in;
			c.ft=c1.ft+c2.ft+c.in/12;
            c.in=c.in/12;	
			return c;
		}
		void display()
		{
			cout<<"distance is:"<<ft<<","<<in<<endl;
		}
};
int main()
{
	DISTANCE c1(3,5),c2(5,8),c3;
	c3=c3.calc(c1,c2);
	c3.display();
	return 0;
}