// #include <stdio.h>
// int main ()
// {
//     int n;
//     printf("\nEnter a number\n");
//     scanf("%d",&n);

//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//       sum = sum + i;
//     }
//     printf("sum is %d :\n", sum);

//     return 0;
    
// }

#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter a number\n");
    scanf("%d",&n);

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;

    }
    printf("Total sum is : %d\n",sum);

    for (int i = n; i>=1; i--)
    {
        printf("reverse number is : %d \n",i);
    }
    

    return 0;
    

} 