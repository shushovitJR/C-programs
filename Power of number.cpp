#include<iostream>
#include<conio.h>
using namespace std;
	int power(int b,int a);
	int main()
	{
		int a,b,result;
		cout<<"enter the base and the power"<<endl;
		cin>>b>>a;
		result=power(b,a);
		cout<<result<<endl;
		return 0;
	}
	int power(int b,int a)
	{
		if (a==0)
		{
			return 1;
		}
		else
		return (b*power(b,a-1));
	}
