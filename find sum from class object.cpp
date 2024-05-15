#include<iostream>
#include<stdio.h>
using namespace std;
	class test
	{
		int a,b,z;
		public:
			int sum(int x,int y);
	};
	test::sum(int x,int y)
	{
		a=x;
		b=y;
		z=a+b;
		cout<<"sum="<<z<<endl;
		return 0;
	}
	int main()
	{
		test t;
		int x=5;
		int y=5;
		t.sum(x,y);
		return 0;
	}
