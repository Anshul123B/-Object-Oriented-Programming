#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the two numbers: "<<endl;
			cin>>a>>b;
		}
		void putdata()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
};
 int main()
 {
 	demo aa[5];
 	int i;
 	for(i=0;i<5;i++)
 	aa[i].getdata();
 	
 	for(i=0;i<5;i++)
 	aa[i].putdata();
 	return 0;
 }
