#include <stdio.h>
#include <stdlib.h>

int squareCubeTbl();

int main()
{
    squareCubeTbl();
    return 0;
}

int squareCubeTbl()
{
    int number, square, cube;
    printf("\nNo\tSquare\tCube");

    for (number = 0; number <= 10; number++)
    {
        square = number * number;
        cube = number * number * number;

        printf("\n%d", number);
        printf("\t%d", square);
        printf("\t%d", cube);
    }
}
