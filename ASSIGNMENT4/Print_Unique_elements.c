#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[100],n,count;
    printf("Input the Number of elements to store in the array>> ");
    scanf("%d", &n);

    for (int i=0; i<n; i ++)
    {
        printf("Enter the elements>> ");
        scanf("%d",&numbers[i]);
    }

    for (int i=0; i<n; i ++)
    {
        count =0;
        for (int j=0; j<n; j ++)
        {
            if (numbers[i] == numbers[j])
            {
                count ++;
            }
        }
        if (count == 1)
        {
            printf("%d\n", numbers[i]);
        }
    }
    return 0;
}
