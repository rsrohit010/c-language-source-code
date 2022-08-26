#include <stdio.h>
int main ()
{
    int number;
    printf("Emter a random number\n");
    scanf("%d",&number);

    if (number > 90){
        printf("you are first in class \n");
        printf("keep it keep grow\n");

    }
    else if (number > 80){
        printf(" you are in second in class\n");
        printf("keep it up better\n");

    }
    else if ( number < 70){
        printf("you are in third in class\n");
        printf("noo bad\n");
    }
    else {
        printf(" so bad student in class \n");
    }
    return 0;
}