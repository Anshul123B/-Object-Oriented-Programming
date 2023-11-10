#include<iostream>
using namespace std;
class A
{
	static int number;
	public:
		static void get_topic()
		{
			cout<<"The number of topic already assign:"<<number<<endl;
		};	
};
int A::number=25;
int main()
{
	A a1;         
	a1.get_topic();
	return 0;
}
