#include<stdio.h>

int main(){
	
	char employ;
	float worklength;
	
	printf("Are you employee? (y/n) : ");
	scanf("%c",&employ);
	
	if (employ == 'Y' || employ == 'y')
	{
		printf("\nPlease enter worklength: ");
		scanf("%f",&worklength);
		
		if (worklength >= 5)
		  printf("\nYour credit card application is accepted");
		  
		else
		  printf("\nPlease provide a guarantor");
	}
	
    else
		printf("\nYour credit card application is rejected");
	
	return 0;
}