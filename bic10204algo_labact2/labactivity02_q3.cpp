//Code is written by: Khor Hwee Shian (CI230085)
/* Enter 3 values and compute the answer */

#include<stdio.h>

int main()
{
	int number1, number2, number3;
	int answer;
	
	printf("Enter the first number: ");
	scanf("%d",&number1);
	
	printf("Enter the second number: ");
	scanf("%d",&number2);
	
	printf("Enter the third number: ");
	scanf("%d",&number3);
	
	answer = number1 + number2 - number3;
	printf("\nThe answer is %d", answer);
}