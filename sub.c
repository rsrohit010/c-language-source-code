#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter any two integer\n");
  scanf("%d%d",&a,&b);
  sum = a + ~b + 1;
  printf("\nDifference of two integer %d",sum);
  return 0;
}
