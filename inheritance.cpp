#include<iostream>
#include<conio.h>
using namespace std;
class student{
	protected:  //used only incase of inheritance
	int m1,m2;
	public:
		void get()
		{
			cout<<"enter rho, marks m1 and m2"<<endl;
			cin>>m1>>m2;
		}
};
		class sports 
		{
			protected:
				int sm;
				public:
					void getsm()
					{
						cout<<"enter the sports marks"<<endl;
						cin>>sm;
						
					}
		};
		class statement:public student,public sports
		{
			private:
				int total,avg;
				public:
				void display()
				{
					total=m1+m2+sm;
					avg=total/3;
					cout<<"total:"<<total<<endl<<"average:"<<avg<<endl;
				}
		};
		int main()
		{
			statement s;
			s.get();
			s.getsm();
			s.display();
			return 0;
		}
