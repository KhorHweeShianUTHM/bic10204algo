#include <stdio.h>

int main()
{
	int i;
	int num=1000;
	float rate=0.05;
	float a=0;
	
	for ( i = 1; i < 11; i++ )
	{
		a = num * (1 + rate) * i;
		printf("Amount of money for %d year: RM %.2f", i,a);
	}
}