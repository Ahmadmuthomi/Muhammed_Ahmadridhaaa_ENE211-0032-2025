#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area,r;
    const double pi=3.142;

    printf("Enter the radius of the circle ");
    scanf("%lf",&r);

    area = pi*r*r;
    printf("Area = %lf \n", area);
    return 0;
}
