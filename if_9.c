// hey my name is rs rohit 
// i'm a writing a program
// program to swap two number using pointers

#include <stdio.h>
int main ()
{
    // function to swap the two numbers
    void swap ( int *X, int *y)
    {
        int t;
        t = *x;
        *x = *y;
        *y = t;

    }

    int main ()
    int num1, num2;
    printf("Enter the value of num 1\n");

    scanf("%d",&num1);

    printf("Enter the value of num2\n");
    scanf("%d",&num2);

    // displaying numbers before swapping

    printf("Before swapping : %d, num2 is : %d\n",num1, num2);

    // calling the user defined function swap 
    swap(&num1,num2);

    // displaying number after swapping 

    printf("after swapping : num1 is : %d, num2 is : %d\n",num1, num2);

    return o;
}