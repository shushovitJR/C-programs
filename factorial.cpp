#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,i,fact;
	fact=1;
	cout<<"enter a number"<<endl;
	cin>>num;
	for (i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<<"the factorial of "<<num<<" is:"<<fact<<endl;
	return 0;
}
