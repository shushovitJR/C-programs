#include<iostream>
#include<conio.h>
using namespace std;
	class sample
	{
		private:
			int a;
			int b;
			
	
	public:
		int set_data()
		{
			cout<<"enter a and b\n";
			cin>>a>>b;
			return 0;
			
		}
		int display_data()
		{
			cout<<"display\n";
			cout<<a<<endl<<b;
			return 0;
		}
};
		int main()
		{
			sample s;
			s.set_data();
			s.display_data();
			return 0;
		}
		
