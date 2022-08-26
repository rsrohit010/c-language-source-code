#include <stdio.h>
int main()

{
    int rupees;
    printf("Enter some random number\n");
    scanf("%d",&rupees);

    rupees > 1000000000 ? printf("he is a rich person\n") : printf("he is an average person in this world\n");

    return 0;
}
