#include <stdio.h>
#include <stdlib.h>

int main()
{
    double marks;
    int Num_of_students,count=0;
    char grade,regNo[20],st_name[15];

    printf("Enter the numbers of students.>>");
    scanf("%i",&Num_of_students);

    while (count < Num_of_students){
        printf("Enter your Name. ");
        scanf("%s",st_name);
        printf("Enter your registration number. ");
        scanf("%s",regNo);
        printf("Enter your marks. ");
        scanf("%lf",&marks);

        if (marks >= 70){
            grade = 'A';
        } else if (marks >= 60){
            grade = 'B';
        } else if (marks >= 50){
            grade = 'C';
        } else if (marks >= 40){
            grade = 'D';
        } else {
            grade = 'F';
        }
        printf("\nRegistration No: %s\n",regNo);
        printf("Name: %s\n",st_name);
        printf("Marks: %lf\n",marks);
        printf("Grade: %c\n",grade);

        if (marks>=40){
            printf("PASS\n\n\n");
        } else{
            printf("FAIL\n\n\n");
        }
        count++;
    }
    return 0;
}
