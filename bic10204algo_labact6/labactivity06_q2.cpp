#include <stdio.h>

int main(){
	int i = 1;
	int num,total=0;
	
	do
	{
		printf("Please enter number %d:\t",i); 
		scanf("%d", &num);
		total += i;
		i++;
	}
		while (i < 6);
		printf("\nThe total of five number is %d", total);
}