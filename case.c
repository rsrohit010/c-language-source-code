#include<stdio.h>
int main ()
{
    int day;
    printf(" enter a day (1 to 7)\n");
    scanf("%d",&day);

    switch (day)
    {
        case 1 : printf("today is monday\n");
        break;
        case 2 : Printf(" today is tuesday\n");
        break;
        case 3 : printf(" today is wednesday\n");
        break;
        case 4 : printf("today is thursday\n");
        break;
        case 5 : printf("Today is friday\n");
        break;
        case 6 : printf("Today is saturday\n");
        break;
        case 7 : printf("today is sunday\n");
        break;
    //efault: printf(" today is not valid day\n")
    }
    return 0;
}