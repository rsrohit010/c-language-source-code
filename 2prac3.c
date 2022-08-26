#include <stdio.h>
int main()
{
    int issunday = 1;
    int isshowing = 0;
    int monday = 1;
    int running = 0;
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    printf("%d\n", x>9 && x<100);


    printf("\n%d\n",issunday || isshowing);
    printf("%d\n",monday || running);


    return 0;
}