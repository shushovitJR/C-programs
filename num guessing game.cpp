#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
int main(){
    int num, guess, tries;
    srand(time(NULL));
    num= (rand() % 100) + 1;
    cout<<num<<endl;
    return 0;
}