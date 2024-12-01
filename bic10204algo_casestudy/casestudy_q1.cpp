#include <stdio.h>
#define FIRST 43.6 // 200 * (21.8 / 100)
#define SECOND 33.4 // 100 * (33.4 / 100)
#define THIRD 154.8 // 300 * (51.6 / 100)
#define FOURTH 163.8 // 300 * (54.6 / 100)

int main() {
    int customerId, previousMeter, currentMeter, usageMeter;
    char customerName[50];
    float totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Nickname: ");
    scanf("%s", &customerName);

    printf("\nEnter Meter Reading (kWh)\n");
    printf("Previous: ");
    scanf("%d", &previousMeter);
    printf("Current: ");
    scanf("%d", &currentMeter);
    usageMeter = currentMeter - previousMeter;
    printf("Usage: %d",usageMeter);
    

    if (usageMeter <= 200) 
	{
        totalAmount = usageMeter * (21.8 / 100);
    } 
	else if (usageMeter <= 300) 
	{
        totalAmount = FIRST + (usageMeter - 200) * (33.4 / 100);
    } 
	else if (usageMeter <= 600) 
	{
        totalAmount = FIRST + SECOND + (usageMeter - 300) * (51.6 / 100);
    } 
	else if (usageMeter <= 900) 
	{
        totalAmount = FIRST + SECOND + THIRD + (usageMeter - 600) * (54.6 / 100);
    } 
	else if (usageMeter >= 901) 
	{
        totalAmount = FIRST + SECOND + THIRD + FOURTH + (usageMeter - 900) * (57.1 / 100);
    }
    
    if (totalAmount < 3) 
	{
        totalAmount = 3;
    }  
    printf("\n--------------------------------");
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n\n", customerName);
    printf("Meter Reading (kWh):\n");
    printf("Previous = %d\n", previousMeter);
    printf("Current = %d\n", currentMeter);
    printf("Usage = %d\n", usageMeter);
    printf("Your bill = RM %.2f", totalAmount);

    return 0;
}