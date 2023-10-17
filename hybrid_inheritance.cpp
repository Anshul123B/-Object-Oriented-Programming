#include<iostream>
using namespace std;
class student
{
	int id;
	string name;
	public:
		void getstudent()
		{
			cout<<"Enter the student Id and name: ";
			cin>>id>>name;
		}
};
class marks: public student
{
	protected:
		int marks_maths,marks_phy,marks_chem;
		public:
			void get_marks()
			{
			cout<<"\n Enter the marks of three subject: ";
			cin>>marks_maths>>marks_phy>>marks_chem;
			}
};
class sports{
	protected:
		int sports;
		public:
			void get_sports()
		{
			cout<<"Enter the sports marks: ";
			cin>>sports;
		}
};
class result: public marks,public sports{
	int total_marks;
	float avg_marks;
	public:
		void display(){
			total_marks = marks_maths + marks_phy + marks_chem;
			avg_marks = total_marks/3;
			{
				cout<<"Total marks"<<total_marks;
				cout<<"Average marks"<<avg_marks;
			}
		}
};
int main()
{
	result res;
	res.getstudent();
	res.get_marks();
	res.get_sports();
	res.display();
	return 0;
}
