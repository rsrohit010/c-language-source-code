#include<stdio.h>
int main()
{
    int marks;

    printf("Enter a student Marks : \n");
    scanf("%d",&marks);

    if (marks >= 90){
        printf(" student get A grade\n");
    }

        else if (marks >= 80 && marks <= 90){
            printf(" student get B grade\n");


        }
        else if (marks >= 70 && marks <= 80)
        {
            printf("student get c grade \n");

        }
        else {
            printf("student get fail\n");
        }
        switch (marks)
        {
        case 90 : printf("he/she is a topper of class\n");
            break;
        
        default: printf("keep study student\n");
            break;
        }
    return 0;
}