#include<stdio.h>

int main()
{
	char character;
	
	printf("\nEnter one character: ");
	character = getchar();
	printf("\nThe character that has been entered is ");
	putchar(character);
	
	return 0;
}