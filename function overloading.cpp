#include<iostream>
#include<conio.h>
using namespace std;
int mul(int a, int b){
	return (a*b);
}
float mul(float a, float b){
	return (a*b);
}
int main(){
	int x=10;
	int y=10;
	cout<<"x*y="<<mul(x, y);
	cout<<endl;
	float c=2.5;
	float d=2.5;
	cout<<"c*d="<<mul(c, d);
	return 0;
}
