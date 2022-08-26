#include <stdio.h>
int main()
{
    int marks[4];

    printf("Enter a maths :\n");
    scanf("%d", &marks[0]);

    printf("Enter a sci :\n");
    scanf("%d", &marks[1]);

    printf("Enter a chem :\n");
    scanf("%d", &marks[2]);

    printf("\tmaths = %d,\n", marks[0]);
    printf("\tchemistry = %d\n", marks[2]);
    printf("\tscience = %d\n", marks[1]);
    printf("\n");

    marks[3] = marks[0] + marks[1] + marks[2];

    printf("Total marks in all subject is  :- %d / 300\n",marks[3]);

    if (marks[0] <= 33)
    {
        printf("fail in math \n");
    }

         else if (marks[1] <= 33)
         {
            printf("fail in science\n");
         }
           else if (marks[2] <= 33)
           {
            printf("fail in chemistry\n");
           }

           else{
            printf("\n");
            printf("congratulations you are pass in all subjects.\n");
            printf("\n");

            printf("well play students\n");
            
           }
           printf("\n");
           int sum;

           for (int i = 1; i <=300; i++)
           {
            // if (i == 300){
            //     break;
            // }
            sum = sum + i;

            printf("Print 1 to 300 number :-%d\n",i);

           }
            {
                printf("\tcomplete your task\n");
            }

            // string name;

            // printf("Enter your name please\n");
            // scanf("%c\n",&name);

            printf("\tthank you student\n");
            
            
           
           
    



    return 0;


}