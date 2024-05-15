#include<iostream>
#include<conio.h>
using namespace std;
class gp{
	protected:
		int gpd;
		public:
			void readgp(){
				cout<<"enter gpd"<<endl;
				cin>>gpd;
			}
};
class p1:virtual public gp{
	protected:
		int p1data;
		public:
		void readp1(){
			cout<<"enter p1 data"<<endl;
			cin>>p1data;
		}
};
class p2:virtual public gp{
	protected:
		int p2data;
		public:
			void readp2(){
				cout<<"enter p2 data"<<endl;
				cin>>p2data;
			}
};
class child:public p1, public p2{
	int sum;
	public:
		void add(){
			sum=gpd+p1data+p2data;
		}
		void show(){
			cout<<"sum:"<<sum<<endl;
		}
};
int main(){
	child c;
	c.readgp();
	c.readp1();
	c.readp2();
	c.add();
	c.show();
	return 0;
}
