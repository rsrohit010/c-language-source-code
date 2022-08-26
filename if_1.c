#include <stdio.h>
int main ()
{
    int age;
    printf("\nenter age :- \n");
    scanf("%d",&age);

    if(age > 18){
        printf("\n they are adult\n");
        printf("\n the are eligible to vote\n");
        printf("\n make some offical document paper\n");
    }

        else {
            printf("\n they are not adult\n");
            printf("\n they are not Eligible to vote\n");

        }
    
    return 0;
}