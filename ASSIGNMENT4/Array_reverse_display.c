
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[100],n;

    printf("Input the Number of elements to store in the array>> ");
    scanf("%d", &n);

    for (int i=0; i<n; i ++)
    {
        printf("Enter the elements>> ");
        scanf("%d",&numbers[i]);
    }

    printf("The values of elements stored in the array are:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d\n", numbers[i]);
    }

    printf("The values store into the array in reverse are :\n");
    for (int i=n-1; i>=0; i--)
    {
        printf("%d\n", numbers[i]);
    }
    return 0;
}
