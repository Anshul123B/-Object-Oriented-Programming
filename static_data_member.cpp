#include<iostream>
using namespace std;
class demo
{
	int x,y;
	static int z;
	public:
		void getdata()
		{
			cout<<"Enter two numbers: ";
			cin>>x,y;
		}
		void showdata()
		{
		  cout<<"\nx= "<<x<<"\ty= "<<y;
		  cout<<"\nZ= "<<z;
		}
};
int demo::z;
int main()
{
	demo aa,bb;
	aa.getdata();
	bb.getdata();
	aa.showdata();
	bb.showdata();
	return 0;
 } 
