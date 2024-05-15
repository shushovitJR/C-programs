#include<iostream>
#include<conio.h>
using namespace std;
class demo{
	int num;
	char ch;
	public:
		demo &setvalue(int num)
		{
			this->num=num;
			return*this;
		}
		demo &setvalue1(char ch)
		{
			this->ch=ch;
			return*this;
		}
		void displayvalue1()
		{
			cout<<num<<endl;
			cout<<ch<<endl;
		}
};
int main(){
	demo d;	//chaining calls
	d.setvalue(10).setvalue1('n');
	d.displayvalue1();
	return 0;
}
