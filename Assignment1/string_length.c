#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstname[10], lastname[10];
    int age;
    printf("Enter first name: ");
    scanf("%s",firstname);
    printf("Enter your last name: ");
    scanf("%s",lastname);
    printf("Enter your age: ");
    scanf("%i",&age);

    printf("Good Evening %s %s. You are %i years old.\n",firstname,lastname,age);
    printf("The size of your firstname is %i chracters and lastname %i characters.\n",strlen(firstname),strlen(lastname));

    return 0;
}
