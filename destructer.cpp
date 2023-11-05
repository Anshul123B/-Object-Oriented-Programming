#include<iostream>
using namespace std;
class test
{
	public:
		test()
		{
			cout<<"Constructer will execute";
		}
		~test()
		{
			cout<<"\n Destructer will execute";
		}
};
int main()
{
	test t,t1,t2,t3;
	return 0;
}
