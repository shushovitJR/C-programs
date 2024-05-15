#include<iostream>
#include<conio.h>
using namespace std;
class vehicle{
	public:
		vehicle()
		{
			cout<<"This is a vehicle"<<endl;
		}
};
class car:public vehicle{
	public: 
	car(){
		cout<<"this is a car"<<endl;
	}
};
class racing{
	public:
		racing()
		{
			cout<<"this is a racing car"<<endl;
		}
};
class ferrari:public car, public racing{
	public:
		ferrari(){
			cout<<"this is a ferrari"<<endl;
		}
};
int main()
{
	cout<<"what is this?"<<endl;
	ferrari f;	
	return 0;
}
