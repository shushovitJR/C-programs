#include<iostream>
#include<conio.h>
using namespace std;
	int main()
	{
		int a,b,c,i,num;
		a=0;
		b=1;
		cout<<"enter the num of elements\n";
		cin>>num;
		cout<<a<<endl<<b<<endl;
		for (i=2;i<num;i++)
		{
			c=a+b;
			cout<<c<<endl;
			a=b;
			b=c;
		}
		return 0;
	}
