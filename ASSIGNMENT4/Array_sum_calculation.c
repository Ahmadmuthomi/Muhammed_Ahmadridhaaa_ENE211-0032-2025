#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[100],n, sum=0;

    printf("Input the Number of elements to store in the array>> ");
    scanf("%d", &n);

    for (int i=0; i<n; i ++)
    {
        printf("Enter the elements>> ");
        scanf("%d",&numbers[i]);
    }

    for (int i=0; i<n; i++)
    {
        sum = sum + numbers[i];
    }
    printf("%d",sum);
    return 0;
}
