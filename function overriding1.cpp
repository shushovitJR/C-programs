#include<iostream>
#include<conio.h>
using namespace std;
	class base{
		public:
			void print(){
				cout<<"this is the base class"<<endl;
			}
	};
	class derive: public base
	{
		public:
			void print(){
				cout<<"this is the derive class"<<endl;
				// base::print();   you can also do this
			}
	};
	int main(){
		derive d,dl;
		d.print();
		dl.base::print();
		return 0;
	}
