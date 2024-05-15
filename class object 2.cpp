#include<iostream>
#include<conio.h>
using namespace std;
	class sample
	{
		private:
			int a;
			int b;
			public:
				int set_data();
				int display_data();
			};
			
	int sample::set_data()
		{
		cout<<"enter the value of A and B"<<endl;
		cin>>a>>b;
		return 0;
		}
		int sample::display_data()
		{
			cout<<"display values"<<endl;
			cout<<a<<endl<<b;
			return 0;
			
		}
		int main()
		{
			sample s;
			s.set_data();
			s.display_data();
			return 0;
		}
	
		
