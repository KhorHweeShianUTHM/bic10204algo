#include <stdio.h>
#define FIRST 40 // 20 * 2
#define SECOND 105 // 35 * 3

int main() {
    int customerId, previousMeter, currentMeter, usageMeter;
    char customerName[50];
    float totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Nickname: ");
    scanf("%s", &customerName);

    printf("\nEnter Meter Reading (m3)\n");
    printf("Previous: ");
    scanf("%d", &previousMeter);
    printf("Current: ");
    scanf("%d", &currentMeter);
    usageMeter = currentMeter - previousMeter;
    printf("Usage: %d",usageMeter);
    
    if (usageMeter < 20) 
	{
        totalAmount = usageMeter * 0.8;
    } 
	else if (usageMeter <= 35) 
	{
        totalAmount = FIRST + usageMeter - 20 * 2;
    } 
	else if (usageMeter > 35) 
	{
        totalAmount = FIRST + SECOND + usageMeter - 35 * 3;
    } 
	
	if (totalAmount < 7) 
	{
        totalAmount = 7;
    }
      
    printf("\n--------------------------------");
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n\n", customerName);
    printf("Meter Reading (m3):\n");
    printf("Previous = %d\n", previousMeter);
    printf("Current = %d\n", currentMeter);
    printf("Usage = %d\n", usageMeter);
    printf("Your bill = RM %.2f", totalAmount);

    return 0;
}