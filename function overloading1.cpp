#include<iostream>
#include<conio.h>
using namespace std;
int area_rec(int l, int b){
	return (l*b);
}
int area_sqr(int l){
	return (l*l);
}
int main(){
	int a,b;
	int c;
	cout<<"enter the l and b of rec"<<endl;
	cin>>a>>b;
	cout<<"the area of rec is:"<<area_rec(a, b);
	cout<<endl;
	cout<<"enter the length of sqr"<<endl;
	cin>>c;
	cout<<"the area of sqr is:"<<area_sqr(c);
	cout<<endl;
	return 0;
}
