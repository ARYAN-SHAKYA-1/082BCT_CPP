#include<iostream>
using namespace std;

class COMP
{
	private:
		int re,im;
	public:
		COMP()
		{
			re=0;
			im=0;
		}
		COMP(int a, int b)
		{
			re=a;
			im=b;
		}
		COMP calc(COMP c1,COMP c2)
		{
			COMP c;
			c.re=c1.re+c2.re;
			c.im=c1.im+c2.im;	
			return c;
		}
		void display()
		{
			cout<<"complex is:"<<re<<"+i"<<im<<endl;
		}
};
int main()
{
	COMP c1(3,5),c2(5,8),c3;
	c3=c3.calc(c1,c2);
	c3.display();
	return 0;
}