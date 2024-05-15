//wap to copy the contents of wall1 to wall2//
#include<iostream>
#include<conio.h>
using namespace std;
	class wall{
		private:
			double length;
			double breadth;
			public:
				wall(double len,double br)
				{
					length=len;
					breadth=br;
				}
			wall(wall &obj)
			{
				length=obj.length;
				breadth=obj.breadth;
			}
			double calarea(){
				return(length*breadth);
			}
	};
		int main()
		{
			wall wall1(10.8,1.8976);
			wall wall2=wall1;
			cout<<"area of first wall"<<endl<<wall1.calarea()<<endl;
			cout<<"area of wall2"<<endl<<wall2.calarea()<<endl;
			return 0;
			}
