#include<iostream>
#include<conio.h>
using namespace std;
	int main()
	{
		int num,i,c=0;
		cout<<"enter the number\n";
		cin>>num;
		for (i=1;i<=num;i++)
		{
			if (num%i==0)
			c++;
		}
		if (c==2)
		cout<<"its a prime number\n";
		else
		cout<<"it is not a prime number\n";
		return 0;
	}
