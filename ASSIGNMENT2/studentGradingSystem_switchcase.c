#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks,Num_of_students,count=0;
    char grade,regNo[20],st_name[15];

    printf("Enter the numbers of students.>>");
    scanf("%i",&Num_of_students);

    while (count < Num_of_students){
        printf("Enter your Name. ");
        scanf("%s",st_name);
        printf("Enter your registration number. ");
        scanf("%s",regNo);
        printf("Enter your marks. ");
        scanf("%i",&marks);

        printf("\nRegistration No: %s\n",regNo);
        printf("Name: %s\n",st_name);
        printf("Marks: %i\n",marks);

        switch (marks/10){
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            case 3:
            case 2:
            case 1:
            case 0:
                grade = 'F';
                break;
            default:
                printf("Invalid Marks.");
        }
        printf("Grade: %c\n",grade);

        switch (marks /10){
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
                printf("PASS\n\n\n");
                break;
            case 3:
            case 2:
            case 1:
            case 0:
                printf("FAIL\n\n\n");
                break;
            default:
                printf("Invalid Marks.");
        }
        count++;
    }
    return 0;
}
