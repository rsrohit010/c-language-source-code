#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    int sum = 0;
    for (int i = 0; i <=n; i++)
    {
        sum = sum + i;
    }
    printf("\nTotal sum Is : %d\n",sum);

    for (int i = n; i >= 1; i-- )
    {
        printf("\ntotal reverse number is : %d\n",i);
    }
    return 0;
    
}