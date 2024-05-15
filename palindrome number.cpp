#include<iostream>
#include<conio.h>
using namespace std;
	int main()
	{
		int num,temp,r,sum=0;
		cout<<"enter a number\n";
		cin>>num;
		temp=num;
		while (num>0)
		{
			r=num%10;
			sum=(sum*10)+r;
			num=num/10;
		}
		if (temp==sum)
		cout<<"it is a palindrome number\n";
		else
		cout<<"it is not a palindrome number\n";
		return 0;
	}
