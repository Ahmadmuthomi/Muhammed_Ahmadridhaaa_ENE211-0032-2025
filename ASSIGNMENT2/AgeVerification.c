#include <stdio.h>
#include <stdlib.h>

int main()
{   int age;

    printf("Enter your Age!");
    scanf("%i",&age);

    if (age >= 18){
        printf("You are an adult\n");
    }
    return 0;
}
