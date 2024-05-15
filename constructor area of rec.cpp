//wap to calc area of rec1 and copy it to rectanle 2//
#include<iostream>
#include<conio.h>
using namespace std;
	class rec{
		private:
			double length;
			double breadth;
			public:
				rec(double len,double br)
				{
					length=len;
					breadth=br;
				}
				rec()/*No need to call empty constructors*/
				{
					cout<<"The length and breadth is:"<<length<<""<<breadth<<endl;
				}
	};
	int main()
	{
		rec rec1(2,4);
		
		
	
		return 0;
	}
