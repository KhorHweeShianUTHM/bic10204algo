#include<stdio.h>

int main()
{
	int num;
	char character;
	
	printf("\nEnter one character: ");
	num = getc(stdin);
	character = num;
	printf("\nCharacter that has been entered is ");
	putc(character, stdout);
	printf("\nThe value of %c in integer is %d", character, num);
	
	return 0;
}