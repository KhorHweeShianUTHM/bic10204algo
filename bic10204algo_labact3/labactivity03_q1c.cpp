#include<stdio.h>

int main()
{
	char name[20];
	
	printf("\nEnter your name: ");
	gets(name);
	printf("\nYour name is ");
	puts(name);
	
	return 0;
}