#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100], n, i, value, pos;
    printf("Input the size of array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("Input the value to be inserted: ");
    scanf("%d", &value);
    printf("Input the position, where the value is to be inserted: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1 || n >= 100)
    {
        printf("Invalid position!\n");
        return 1;
    }
    printf("The current list of the array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    n++;

    printf("\nAfter Insert the element the new list is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
