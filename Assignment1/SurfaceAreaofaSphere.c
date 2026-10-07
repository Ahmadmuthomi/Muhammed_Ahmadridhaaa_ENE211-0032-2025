#include <stdio.h>
#include <stdlib.h>

int main()
{
    double surface_area,r;
    const double pi=3.142;

    printf("Enter the radius of the sphere ");
    scanf("%lf",&r);

    surface_area = 4*pi*r*r;
    printf("Surface Area = %lf \n", surface_area);
    return 0;
}
