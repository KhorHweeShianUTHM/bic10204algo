#include <stdio.h>

int main(){
	int i = 1;
	int num,ans;
	
	printf("Please enter multiplication table: ");
	scanf("%d", &num);
	 
	while (i < 13)
	{
		ans = i * num;
		printf("\n%d * %d = %d", i,num,ans);
		i++;
	}
}