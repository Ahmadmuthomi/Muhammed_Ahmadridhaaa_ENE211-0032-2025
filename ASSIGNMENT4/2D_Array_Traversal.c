#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6][4], i, j, k = 1;
    for (i = 0; i < 6; i++)
        for (j = 0; j < 4; j++)
            a[i][j] = k++;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++)
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        printf("\n");
    }
    return 0;
}
