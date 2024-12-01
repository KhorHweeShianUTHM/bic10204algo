#include <stdio.h>

double basicSalary ()
{
	double salary;
	do
	{
		printf("\nEnter your salary (RM): ");
		scanf("%lf", &salary);
		
		if (salary < 1000)
		{
			printf("\nYour entering is too low. Please enter again.\n");
		}
	} while(salary < 1000); 
	return salary;
}

double EPF (double salary)
{
    double epf, epfdec;
    
    do {
        printf("\nEnter EPF percentage (between 9 and 11): ");
        scanf("%lf", &epf);
        
        if (epf < 9) 
		{
            printf("\nYour entering is too low. Please enter again.\n");
        }
        else if (epf > 11) 
		{
            printf("\nYour entering is too high. Please enter again.\n");
        }
    } while (epf < 9 || epf > 11);

    epfdec = salary * epf / 100;
    return epfdec;
}

double calculateBonus (double salary)
{
	double bonus;
	bonus = salary * 0.5;
    return bonus;
}

void displayTotalPay (double salary, double epf , double bonus)
{
	double totalPay;
    totalPay = salary - epf + bonus;
    printf("\n\nSalary\t\t : RM %.2lf", salary);
    printf("\nEPF deduction\t : %.2lf", epf);
    printf("\n\nYour total pay is RM %.2lf - RM %.2lf + RM %.2lf = RM %.2lf\n", salary, epf, bonus, totalPay);
}

int main()
{
	double salary, epf, bonus;
    salary = basicSalary();
    epf = EPF(salary);
    bonus = calculateBonus(salary);
    displayTotalPay(salary, epf, bonus);
    return 0;
}