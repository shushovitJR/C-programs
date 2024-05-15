#include<iostream>
#include<conio.h>
using namespace std;
class base{
	public:
		void print(){
			cout<<"this is base class"<<endl;
		}
};
class derive:public base{
	public:
		void print(){
			cout<<"this is derive class"<<endl;
		}
};
int main(){
	derive d;
	d.print();
	return 0;
}
//output:this is derive class
