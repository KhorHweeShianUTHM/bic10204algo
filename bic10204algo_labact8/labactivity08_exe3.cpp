#include<stdio.h>
#define no 5
int main()
{
	int i,j;
	int number[5][5] = {1,2,3,4,5,6,7,8,9,10};
	printf("\n Number in array");
	
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<no ; j++)
		printf("%d", number[i][j]);
	}
	return 0;
}