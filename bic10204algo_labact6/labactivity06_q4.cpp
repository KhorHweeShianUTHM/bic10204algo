#include <stdio.h>

int main(){
	int i, j,num,total;
	printf("Number 1 to 10: ");
	scanf("%d",&num);
	
	for ( i = 1; i <= num; i++ ) 
	{
		printf("\nRow %d: ", i);

		for ( j = 1; j < 11; j++ )
		{
			total = j + 1;
			printf("%d ",j);
		}
	}
}