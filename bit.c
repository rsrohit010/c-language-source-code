#include <stdio.h>
int main()
{
    int a = 3, b = 7, c;
    float rs;
    char symbloe;

    printf(" \n a = %d\n", a );
    printf("\n b = %d\n", b);
    c = a+b;
    printf("\n c = %d\n", c);

    c = a*b;
    printf("\n print the value of c : %d\n", c);

// now i'm working on float


printf(" enter a float number\n");
scanf("%f\n",& rs);
// now i'm working on char 

printf("enter a char symbol\n");
scanf("%c\n",& symbloe);
    return 0;
}