#include <stdio.h>
int main()
{
    int num = 10;
    printf("num: %d\n",num);
    num += 10;
    printf("+=num %d\n",num);
    num -= 10;
    printf("-=num %d\n",num);
    num *= 50;
    printf("*=num %d\n",num);

    return 0;
}