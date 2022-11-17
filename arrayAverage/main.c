#include <stdio.h>
#include <stdlib.h>

int arrayAverage(int numbers[], int size);

int main()
{
    int i, arraySize, numbers[1000];
    float average;

    printf("Enter Array size: ");
    scanf("%d", &arraySize);
    printf("Enter %d elements:\n", arraySize);

    for(i = 0; i < arraySize; i++)
    {
        scanf("%d", &numbers[i]);
    }

    average = (float) arrayAverage(numbers, arraySize);
    printf("Average of Numbers is: %f\n", average);

    return 0;
}

int arrayAverage(int numbers[], int size)
{
    int i, sum = 0;
    float average;

    for (i = 0; i < size; i++)
    {
        sum += numbers[i];
        average = (float) sum / size;

    }

    return (average);
}
