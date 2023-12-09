#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void inputa()
			{
				cout<<"Enter the number: ";
				cin>>a;
			}
};
class B:public A
{
	protected:
		int b;
		public:
			inputb()
			{
				cout<<"\nEnter the number: ";
				cin>>b;
			}
			void add()
			{
				cout<<"\nAddition is: "<<a+b;
			}
};
int main()
{
	B aa;
	aa.inputa();
	aa.inputb();
	aa.add();
	return 0;	
}

