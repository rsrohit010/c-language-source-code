#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character by user :  \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("upper case\n");

    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("lower case\n");
    }
    else {
        printf("no english word\n");
    }

     return 0;
}