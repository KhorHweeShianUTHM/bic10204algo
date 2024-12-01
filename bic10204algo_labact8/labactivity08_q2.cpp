#include <stdio.h>
#include <string.h>

int main()
{
	char secpro[100], inpro[20];
	char firpro[]="Gordon Ramsay: Cookalong Live";
	
	printf("Enter your second favorite television program: ");
	gets(inpro);
	
	strcpy(secpro, inpro);

	printf("\nFirst favorite television program is %s.", firpro);
	printf("\nSecond favorite television program is %s.", secpro);
	
	return 0;
}