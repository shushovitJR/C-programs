#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
	int main(){
		double a,b,c,a1,b1,ans;
		cout<<"enter sides a and b"<<endl;
		cin>>a>>b;
		a1=a*a;
		b1=b*b;
		ans=sqrt(a1+b1);
		c=ans;
		cout<<"the hypotenuse is:"<<c<<endl;
		
		return 0;
	}
