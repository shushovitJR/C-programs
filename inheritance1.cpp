#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	int roll;
	char *name;
	public:
		int getstudentdata(){
			cout<<"enter teh roll and name"<<endl;
			cin>>roll>>name;
			 return 0;
		}
		int display()
		{
			cout<<"name:"<<name<<endl<<"roll:"<<roll<<endl;
			 return 0;
		}
};
class marks:public student
{
	int sub1,sub2,sub3;
	public:
		int getmarks()
		{
			cout<<"enter marks of 3 subjects"<<endl;
			cin>>sub1>>sub2>>sub3;
			 return 0;
		}
		int displaymarks(){
			cout<<"marks:"<<sub1<<endl<<sub2<<endl<<sub3<<endl;
			 return 0;
			
		}
		int findtotal(){
			return(sub1+sub2+sub3);
		}
};
class result:public marks
{
	int total;
	float percentage;
	public:
		int getdata(){
			getstudentdata();
			getmarks();
			 return 0;
		}
		int displaydata()
		{
			display();
			displaymarks();
			total= findtotal();
			percentage= total/3;
			cout<<"total:"<<total<<endl<<"percentage:"<<percentage<<endl;
			 return 0;
		}
};
int main()
{
	result r;
	r.getdata();
	r.displaydata();
	return 0;
}
