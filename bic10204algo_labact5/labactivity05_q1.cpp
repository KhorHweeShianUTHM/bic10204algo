#include<stdio.h>

int main(){
	
	float cgpa;
	
	printf("Please enter your CGPA: ");
	scanf("%f",&cgpa);
	
	if (cgpa>=3.7 && cgpa <=4)
	printf("\nFirst class honors");
	
	else if (cgpa>=3 && cgpa<=3.69)
	printf("\nUpper second class honors");
	
	else if (cgpa>=2.3 && cgpa<=2.99)
	printf("\nLower second class honors");
	
	else if (cgpa>=2 && cgpa<=2.29)
	printf("\nThird class honors");
	
	else if (cgpa>0 && cgpa<2)
	printf("\nFailed");
	
	else
	printf("\nWrong entered CGPA");
	
	return 0;
}