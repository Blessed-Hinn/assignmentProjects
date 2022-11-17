#include <stdio.h>

char studentRank ();

int main ()
{
    
    studentRank();
    return 0;
}
 
 char studentRank ()
{
    char studentName[15];
    int marks;
    char grade;

    printf("\ninput student name:");
    scanf("%s",&studentName);
    printf("\ninput student marks:");
    scanf("%d",&marks);
    printf("\nyour score is:%d",marks);

    switch (marks/10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
       grade = 'A';
       printf("\nhello %s ,your grade is :%c",studentName ,grade);
        break;
         case  6 :
       grade = 'B';
       printf("\nhello %s ,your grade is :%c",studentName ,grade);
        break;
          case 5 :
       grade = 'C';
       printf("\nhello %s ,your grade is :%c",studentName,grade);
        break;
          case 4 :
       grade = 'D';
       printf("\nhello %s ,your grade is :%c",studentName,grade);
        break;
          case 3 :
           case 2:
            case 1 :
       printf("\nhello %s youve failled!!", studentName);
        break;
        default:
       printf("\nPlease enter  valid marks , %s!!",studentName);
        break;
    
    
    }

    return grade ;
}