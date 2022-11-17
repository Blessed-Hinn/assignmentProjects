#include <stdio.h>
#include <stdlib.h>

int saleSalary();

int main()
{
    saleSalary();
    return 0;
}

int saleSalary()
{
    const int grossSalary = 5000;
    float  sales, commission, netSalary;

    printf("Enter sales in SHILLINGS(-1 to end): ");
    scanf("%f", &sales);

    if (sales == -1)
    {
    }

    else
    {
        commission = 0.09 * sales;
        netSalary = grossSalary + commission;
        printf("Salary is: KSh %.2f/=", netSalary);
    }

    return (0);
}
