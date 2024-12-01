//Code is written by: Khor Hwee Shian (CI230085)
/* Compute the volume of cone */

#include<stdio.h>

int main()
{
	int radius, height;
	float volume;
	
	printf("A program to calculate volume of a cone");
	
	printf("\nEnter the radius: ");
	scanf("%d", &radius);
	
	printf("\nEnter the height: ");
	scanf("%d", &height);
	
	volume = 1.0 / 3.0 * 3.142 * (radius * radius) * height;
	printf("\nThe volume of cone is = %f", volume);
}