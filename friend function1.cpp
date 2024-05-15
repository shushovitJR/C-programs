#include<iostream>
#include<conio.h>
using namespace std;
	class A{
		private:
			int x;
			protected:
				int y;
				public:
					A()
					{
						x=10;
						y=20;
					}
					
				

					friend void print (A & a);
				};
				void print(A &a)
					{
						cout<<"private variable:"<<a.x<<endl;
						cout<<"protected:"<<a.y<<endl;
						
					}
	int main(){
		A a1;
		print(a1);
		return 0;
	}
	
