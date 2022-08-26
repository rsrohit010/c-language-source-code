#include<stdio.h>
int main()
{
  int num;
  printf("Enter the value of number whose multiplication table is to be printed\n");
  scanf("%d",&num);
  for (int i = 0; i < 31; i++)
  {
    printf("%d x %d = %d\n",num,i, i*num);
  }
  return 0;
}
