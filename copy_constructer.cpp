#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo()
		{
		a=10;
		}
		demo(demo & y)
		{
			a=y.a;
		}
		void putdata()
		{
			cout<<"\n A= "<<a;
		}
};
int main()
{
	demo aa;
	demo bb(aa);
	aa.putdata();
	bb.putdata();
	return 0;
}
