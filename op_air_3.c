// Airthmetic operator example code
#include <stdio.h>
int main ()
{
    int a = 2882, b =4784;
    int sum, sub, mul, idiv, rem;
    float rdiv;

    sum = a + b;
    sub = a - b;
    mul = a * b;
    idiv = a / b;
    rem = a % b;
    rdiv = (float)a / (float)b;

    printf("\n print the total value of sum :- %d\n",sum);

    printf("print the total value of sub :- %d\n",sub);

    printf("\nprint the value of mul :- %d\n",mul);

    printf("\nprint the total value of idiv :- %d\n",idiv);

    printf("\nprint the total value of rem :- %d\n",rem);

    printf("\nprint the total vlaue of rdiv :- %f\n",rdiv);

    return 0;

}