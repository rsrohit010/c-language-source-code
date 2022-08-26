#include <stdio.h>
int main ()
{
    int marks;
    
    printf("\n Enter the marks:-\n");
    scanf("%d",&marks);

    if(marks > 90){
        printf("he gain firs in class\n");
    }
    else if (marks > 80 && marks < 90){
        printf("he gain second in class\n");
    
    }
    else if (marks > 70 && marks <80){
        printf("he gain third in class \n");

    }
    else {
        printf("faill in class \n");
        /*printf("don't feel so bad for any marks\n");
        printf("marks is a just a number\n");
        printf("you are a legends, keep it up brooo\n");*/


    }
    return 0;
}