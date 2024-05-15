#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int num=rand() & 5 + 1;
	switch (num){
		case 1: cout<<"you win nothing"<<endl;
			break;
		case 2: cout<<"you win $1"<<endl;
			break;
		case 3: cout<<"you win $100"<<endl;
			break;
		case 4: cout<<"you win $9000"<<endl;
			break;
		case 5: cout<<"you win $1000000"<<endl;
			break;
			default: cout<<"you win $5000000"<<endl;
			
	}
	
	
	return 0;
}