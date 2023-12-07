#include<iostream>
using namespace std;
class A
{
	public:
		display()
		{
			cout<<"This is a base class"<<endl;
		}
};
class B:public A
{
	public:
		display()
		{
			cout<<"This is a derived class";
		}
};
int main()
{
	B aa;
	aa.display();
	return 0;
}
