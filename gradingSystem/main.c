#include <stdio.h>
#include <stdlib.h>

gradeStudent();

int main()
{
    gradeStudent();
    return 0;
}


int gradeStudent ()
{
    char name[100];
    char grade;
    int mark;

    printf("Enter student name: ");
    scanf("%[^\n]s", &name);
    printf("Enter marks obtained by %s: ", name);
    scanf("%d", &mark);
    printf("\nName\t\t\tGrade");

        if (mark >= 80 && mark <= 100)
        {
        grade = 'A';
        printf("\n%s \t\t%c", name, grade);
        }

        else if (mark >= 70 && mark <= 79)
        {
        grade = 'B';
        printf("\n%s \t\t%c", name, grade);
        }

        else if (mark >= 60 && mark <= 69)
        {
        grade = 'C';
        printf("\n%s \t\t%c", name, grade);
        }

        else if (mark >= 50 && mark <= 59)
        {
        grade = 'D';
        printf("\n%s \t\t%c", name, grade);
        }

        else if (mark >= 40 && mark <= 49)
        {
        grade = 'E';
        printf("\n%s \t\t%c", name, grade);
        }

        else if (mark >= 0 && mark <= 39)
        {
        grade = 'F';
        printf("\n%s \t\t%c", name, grade);
        }

        else
        {
        printf("\nInvalid marks entered. Enter correct marks!");
        }

    return (0);
}
