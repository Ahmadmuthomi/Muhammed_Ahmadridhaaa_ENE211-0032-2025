#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[100],n,max,min;
    printf("Input the Number of elements to store in the array>> ");
    scanf("%d", &n);

    for (int i=0; i<n; i ++)
    {
        printf("Enter the elements>> ");
        scanf("%d",&numbers[i]);
    }
    max=min=numbers[0];

    for (int i =0; i<n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("\nMaximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);
    return 0;
}
