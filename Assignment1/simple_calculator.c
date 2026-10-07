#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double firstnumber,secondnumber,sum,difference,product,quotient,mod;

    printf("This program finds the sum, product, division, modulus and the subtraction of 2 numbers\n");

    printf("Enter the first number>>> ");
    scanf("%lf",&firstnumber);
    printf("Enter the second number>>> ");
    scanf("%lf",&secondnumber);

    sum= firstnumber+secondnumber;
    product=firstnumber*secondnumber;
    difference = firstnumber - secondnumber;
    if (secondnumber == 0){
        printf("Modulus and quotient cannot be found if a number is divided by zero.\n");
    } else{
        quotient= firstnumber/secondnumber;
        mod = fmod(firstnumber,secondnumber);
    }
    printf("Sum = %lf,  Difference = %lf,",sum,difference);
    printf("Product = %lf,  Quotient = %lf, modulus = %lf \n\n\n",product,quotient,mod);

    return 0;
}
