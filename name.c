#include <stdio.h>
int main ()
{
    char yourname[20];
    int yourage;
    printf("what is your name?\t");
    scanf("%18[^\n]s", yourname);

    yourname[19] = '\0';
    fflush(stdin);
    printf(" How old are you?\t");
    scanf(" %d", &yourage);


    printf("You are %d years old and your name is %s\n\n\n",yourage, yourname);

    return 0;
}
