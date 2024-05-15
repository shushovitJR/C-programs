#include<iostream>
#include<conio.h>
#define PI 3.14
using namespace std;
int area_circle(int r){
	float area;
	area=PI*r*r;
	cout<<"the area of the cirle is:"<<area<<endl;	
	return 0;
}
int main()
{
	float a;
	cout<<"enter the radius of the circle"<<endl;
	cin>>a;
	area_circle(a);
	return 0;
}
