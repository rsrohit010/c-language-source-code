#include <stdio.h>
int main ()
{
    int age;
    printf("enter age\n");
    scanf("%d", &age);

    if(age > 18){
        printf("adult\n");

    }
    else if(age > 13 && age < 18){ 
        printf("\n teenager\n");

    }
    else if(age > 6 && age < 13){
        printf("\n child\n");

    }
    else {
        printf("nothing found\n");
    }
    
}