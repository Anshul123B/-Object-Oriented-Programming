#include<iostream>
using namespace std;
class vechile
{
	public:
		vechile()
		{
			cout<<"This is a vechile"<<endl;
		}
};
class fourwheeler:public vechile
{
	public:
		fourwheeler()
	{
		cout<<"All four wheeler are vechile"<<endl;
	}
};
class car: public fourwheeler
{
	public:
		car()
		{
			cout<<"Car has four wheeles"<<endl;
		}
};
int main() {
car vechile;
return 0;
}
