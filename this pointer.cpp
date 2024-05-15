#include<iostream>
#include<conio.h>
using namespace std;
class name{
	private:
		int data;
		public:
			void method(int a)
			{
				this->data=a;
				cout<<a;
			}
};
int main(){
	name obj;
	obj.method(10);
	return 0;
}
