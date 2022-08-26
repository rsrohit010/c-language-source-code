#include <stdio.h>
int main ()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int sum = 0;

    for (int i = 0; /*j=n;*/ i <= n && /*j>=1;*/ i++; /*j--*/)
    {
        sum = sum + i;
        // printf("%d",j);
    
    }
    printf("%d\n",sum);

    return 0;
    
    // this program is not valid because this code is showing wrong / worning 
    // type message 

}