#include <stdio.h>
int main()
{
	int loop, i,j;
	int number[5][7];
	printf("\n Enter number starting from 1 until 31:"); 
	for(i=0; i<5; i++)
	{
		for(j=0;j<7;j++)
		{
			printf("%d %d >> ", i, j);
			scanf(" %d", &number[i][j]);
			loop = number[i][j];
			if(loop >= 31)
			{
				break;
			}
		}
	}
	printf("\t\t JANUARY");
	
	for(i=0; i<5; i++)
	{
		printf("\n");
		for(j=0;j<7; j++)
		{
			printf(" %5d", number[i][j]);
		}
	}
	return 0;
}