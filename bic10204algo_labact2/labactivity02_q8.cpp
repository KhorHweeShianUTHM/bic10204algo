//Code is written by: Khor Hwee Shian CI230085

#include<stdio.h>

int main()
{
	float prin, rate, inte;
	int year;
	
	printf("A program to compute a simple interest");
	
	printf("\n\nEnter the principal(P): ");
	scanf("%f", &prin);
	
	printf("\nEnter the Rate(R): ");
	scanf("%f", &rate);
	
	printf("\nEnter the Period of Year(N): ");
	scanf("%d", &year);
	
	inte = prin * rate * year / 100;
	
	printf("\nSimple Interest is %.2f", inte);
}