#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout << "Hello I am A" << endl;
		};
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
	D object;
	object.show();
	return 0;
}

