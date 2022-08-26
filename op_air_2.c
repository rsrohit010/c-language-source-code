#include <stdio.h>
int main ()
{
    int a = 2828, b =2329;
    int sum, sub, mul, idiv, rem;
    float rdiv;

    sum = a + b;
    sub = a - b;
    mul = a * b;
    idiv = a / b;
    rem = a % b;
    rdiv = (float)a / (float)b;

    printf("\nprint the value of sum :%d\n",sum);

    printf("\nprint the value of sub : %d\n",sub);

    printf("\nprint the value of mul : %d\n",mul);

    printf("\nprint the value of idiv : %d\n",idiv);

    printf("\nprint the value of rem : %d\n",rem);

    printf("\nprint the value of rdiv :%f\n",rdiv);


    return 0;





}