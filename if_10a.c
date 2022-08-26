 #include<stdio.h>
 int main ()
 {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    
    for(int i = 5; i<=n; i++)
    {
        printf("\n%d\n",i);
    }
    return 0;
 }