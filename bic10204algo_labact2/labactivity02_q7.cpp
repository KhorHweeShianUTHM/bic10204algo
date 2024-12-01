//Code is written by: Khor Hwee Shian CI230085

#include<stdio.h>

int main()
{
	float height, width, area;
	
	printf("A program to compute area of rectangle");
	printf("\n\nEnter the height: ");
	scanf("%f", &height);
	
	printf("\nEnter the width: ");
	scanf("%f", &width);
	
	area = height * width;
	
	printf("\nArea of rectangle is %.2fm2", area);
}