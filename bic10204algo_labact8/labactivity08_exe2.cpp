#include <stdio.h>
#define size 10
char name[25];
int main()
{
	char msg[] = "Happy Birthday";
	int num[5]= {2,4,6,8,10};
	int num1[size]= {8};
	float sahih[2]={1.1,1.2};
	
	printf("\n%d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
	printf("\n%d", num1[2]);
	printf ("\n%f %.lf", sahih[0], sahih[1]);
	printf("\n%s", msg);
	return 0;
}