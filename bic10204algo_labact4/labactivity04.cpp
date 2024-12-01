#include <stdio.h>

int main()
{
	int no1=10, no2=20;
	
	printf("1:%d", no1); // 10
	printf("\n2:%d", no1++); // 10
	printf("\n3:%d", no1); // 11
	printf("\n4:%d", ++no1); // 12
	printf("\n5:%d", no1); // 12
	printf("\n2:%d", no1++); // 12
	
	no1=10, no2=20;
	
	printf("\n\n6:%d", no1+(++no2)); // 10+21 = 31
	printf("\n7:%d", no1-(no2++)); // 10-21 = -11
	printf("\n8:%d", ++no1+no2); // 11+22 = 33
	printf("\n9:%d", --no1+(++no2)); // 10+23 = 33
	printf("\n10:%d", --no1+(++no2)); // 9+24 = 33
	
	no1=30, no2=40;
	
	printf("\n\n11:%d", no1+no2==2); // False, 0
	printf("\n12:%d", no1!=no2); // True, 1
	printf("\n13:%d", no1>no2); // False, 0
	
	return 0;
}