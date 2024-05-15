#include<iostream>
#include<conio.h>
using namespace std;
class base;  //forward declaration
class derive{
	private:
		int x;
		protected:
			int y;
			public:
				derive()
				{
					x=10;
					y=20;
				}
				friend void base::memberfunction(base &obj);
};
	void base::memberfunction(base &obj){
		cout<<"private data is"<<obj.x<<endl;
		cout<<"protected data is"<<obj.y<<endl;
		
	}
	int main()
	{
		base object1;
		derive object2;
		object2.memberfunction(object1);
		return 0;
	}
