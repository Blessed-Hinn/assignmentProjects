#include <stdio.h>
#include <stdlib.h>

int separateDigits();

int main()
{
    separateDigits();
    return (0);
}

int separateDigits()
{
    int number, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a five-digit Number: ");
    scanf("%d", &number);

    digit5 = number % 10;
    number = number / 10;
    digit4 = number % 10;
    number = number / 10;
    digit3 = number % 10;
    number = number / 10;
    digit2 = number % 10;
    number = number / 10;
    digit1 = number % 10;

    printf("%d  %d  %d  %d  %d", digit1, digit2, digit3, digit4, digit5);

    return (0);
}
