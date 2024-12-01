#include<stdio.h>

int main()
{
	int num1;
	float num2;
	const float MAX = 50.88;
	
	printf("Please enter the value of number 1: ");
	scanf("%d", &num1);
	printf("Please enter the value of number 2: ");
	scanf("%f", &num2);
	printf("Please enter the value of MAX: ");
	scanf("%f", &MAX);
	printf("\n\n===================================");
	printf("\nThe value of number 1 is %d", num1);
	printf("\nThe value of number 2 is %.2f", num2);
	printf("\nThe value of MAX is %.2f", MAX);
	printf("\n===================================");
	
	return 0;
}