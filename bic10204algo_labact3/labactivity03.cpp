#include<stdio.h>

int main()
{
	char name[20];
	int mark;
	
	printf("Please enter your name: ");
	scanf("%s", &name);
	printf("Please enter your mark: ");
	scanf("%d", &mark);
	printf("\nYour name is %s and your mark is %d", name, mark);
}
