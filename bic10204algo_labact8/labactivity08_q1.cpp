#include <stdio.h>

int main()
{
	int i, multi, sum, pow, div;
	int num[10];
	printf("Enter 10 integer numbers\n\n");
	
	for(int i=0; i<10; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d",&num[i]); 
	}
    
	multi = num[2] * num[6];
	sum = num[1] + num[3] + num[7] + num[8];
	pow = num[4] * num[4] * num[4];
	div = num[8] / num[0];
	
	printf("\nMultiplication between 3rd and 7th elements : %d ", multi);
	printf("\nSummation of 2nd, 4th, 8th and 9th elements : %d ", sum);
	printf("\n5th element to the power of 3 : %d ", pow);
	printf("\n9th element divides by 1st elements : %d ", div);
	
	return 0;
}