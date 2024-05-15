#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
int main(){
    int guess;
    int tries=0;
	srand(time(NULL));
	int num= (rand() % 100) +1;
	cout<<num<<endl;
    cout<<"**********NUMBER GUESSING GAME**********"<<endl;
    do{

        cout<<"Guess a number between 1-100:"<<endl;
        cin>>guess;
        tries++;
        if(guess>num)
        cout<<"too high"<<endl;
        else if(guess<num)
        cout<<"too low"<<endl;
        else
        cout<<"**********CORRECT**********"<<endl;
        
    } while (guess != num);
    cout<<"NUMBER OF TRIES:"<<tries<<endl;
    cout<<"*******************************************"<<endl;
    
	return 0;
}