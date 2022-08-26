#include<stdio.h>
int main ()
{
    int marks;

    printf("Enter a student marks\n");
    scanf("%d",&marks);

    if (marks >= 33){
        printf("student are pass\n");
    }
    else if ( marks <= 33){
        printf("student are fail\n");
    }
    else {
        printf("keep it up!\n");
    }
    marks >= 33 ?  printf("i love you \n") : printf("i hate you\n");
    return 0;

}