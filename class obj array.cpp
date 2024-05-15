#include<iostream>
#include<conio.h>
using namespace std;
	class sample
	{
		private:
			int x;
			
			public:
				int get_data();
				int put_data();
				
		
	};
		int sample::get_data()
		{
			
			cin>>x;
			return 0;
		}
		int sample::put_data()
		{
			cout<<x<<endl;
			return 0;
		}
		int main()
		{
			int i,n;
			sample s[20];
			cout<<"enter the size"<<endl;
			cin>>n;
			cout<<"enter the elements"<<endl;
			for (i=0;i<n;i++)
			{
				s[i].get_data();
			}
			cout<<"print data"<<endl;
			for (i=0;i<n;i++)
			{
				cout<<s[i].put_data();
				
			}
			return 0;
		}
