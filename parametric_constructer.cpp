#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		demo(int n, int m)
		{
			a=n;
			b=m;
		}
		void putdata()
		{
			cout<<"\na= "<<a<<"\nb= "<<b;
		}
};
int main()
{
	demo aa(5,10);
	aa.putdata();
	return 0;
}
