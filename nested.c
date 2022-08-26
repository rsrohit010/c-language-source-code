#include<stdio.h>
int main ()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);

    if ( number >= 0){
        printf("positive\n");
        if (number % 2 == 0){
            printf("even\n");
        }
        else {
            printf("odd\n");

        }
       
    }
     else {
            printf("negative\n");
            if (number % 1 == 0){
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
}