#include<stdio.h>
int main(){
	char com[30];
	int i=2,a=0;
	printf("Enter Text\n");
	gets(com);
	if(com[0]=='/')
	{
		if(com[1]=='/')
		{
			printf("It is a single line comment\n");
		}
		
			}
			else
			printf("It is not a comment\n");
	
	return 0;
}
