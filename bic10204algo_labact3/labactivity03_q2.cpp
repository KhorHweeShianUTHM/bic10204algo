#include<stdio.h>

int main()
{
	char name[20];
	float height, weight;
	
	printf("Please enter your name: ");
	gets(name);
	printf("Please enter your height(m): ");
	scanf("%f", &height);
	printf("Please enter your weight(kg): ");
	scanf("%f", &weight);
	printf("\n\n===================================");
	printf("\nYour name is ");
	puts(name);
	printf("Your height is %.2f m", height);
	printf("\nYour weight is %.2f kg", weight);
	printf("\n===================================");
	
	return 0;
}
