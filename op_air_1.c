#include <stdio.h>
int main ()
{
    int a = 278, b = 400;
    int sum, sub, mul, rem, idiv ;
    float rdiv;

    sum = a + b;
    sub = a - b;
    mul = a * b;
    idiv = a / b;
    rem = a % b;
    rdiv = (float)a / (float)b;


    printf("\n sum = %d", sum);

    printf("\nsub = %d", sub);

    printf("\nmul = %d",mul);

    printf("\nidiv = %d",idiv);

    printf("\nrem = %d",rem);

    printf("\nrdiv = %f",rdiv);

    return 0;



}