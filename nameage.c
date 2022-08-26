#include<stdio.h>
int main()
{
    char yourname;
    int yourage;

    printf("what is your name?\t");
    scanf("%c", &yourname);
    printf("how old are you?\t");
    fflush(stdin);
    scanf("%d", &yourage);
    printf("you are %d years old and your name is %c\n\n\n", yourage, yourname);

    return 0;

}