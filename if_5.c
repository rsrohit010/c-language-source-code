#include <stdio.h>
int main ()
{
    int age;
    printf("the the number by user \n");
    scanf("%d",&age);

    age >= 18 ? printf("adult\n") : printf("teenager\n");
    return 0;
}