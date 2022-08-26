//subtract two numbers without using subtraction operator;
// code by rs rohit
#include <stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter any two integer: ");
  scanf("%d%d",&a,&b);
  sum = a + ~b + 1;
  printf("Difference of two integer: %d",sum);
  return 0;

}
