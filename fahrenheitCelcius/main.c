#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fahrenheitCelcius();

int main()
{
    fahrenheitCelcius();
    return 0;
}

int fahrenheitCelcius()
{
    int fahrenheit;
    float celcius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%d", &fahrenheit);

    celcius = 5.0 / 9.0 * (fahrenheit - 32);
    printf("Fahrenheit\t \tCelcius\t\n");
    printf("%d\t \t\t%.3f\t\n", fahrenheit, celcius);

    return (0);

}
