/* Created by Rs rohit raj kumar
 * C program to create, initialize and access a pointer
 */

#include <stdio.h>

int main()
{
    char ch;

    //char pointer
    char *pCh;
    pCh = &ch;

    //Assigning value to the variable ch
    ch = 'A';

    //access value and address of ch using variable ch
    printf("Value of ch: %c\n",ch);
    printf("Address of ch: %p\n",&ch);

    //access value and address of ch using pointer variable pCh
    printf("Value of ch: %c\n",*pCh);
    printf("Address of ch: %p",pCh);

   return 0;
}



#include<stdio.h>
int main()
{
  int n, sum=0;

  printf("Enter n value: ");
  scanf("%d", &n);

  for(int i=0; i<=n; i++)
  {
     sum += (i*i);
  }

  printf("Sum of squares of first %d natural numbers = %d",
                                                  n, sum);

  return 0;
}

#include <stdio.h>
int main()
{
  // declare and initialize an array
  int arr[3][2] = {{50,60},{70,80},{90,100}};

  // display 2D array using for loop
  printf("The Array elements are:\n");

  // outer loop for row
  for(int i=0; i<3; i++) {
    // inner loop for column
    for(int j=0; j<2; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n"); // new line
  }

  return 0;
}

#include <stdio.h>
int main()
{
  // variables
  int row;
  int column;

  // take row and column size
  printf("Ener row size: ");
  scanf("%d", &row);
  printf("Ener column size: ");
  scanf("%d", &column);

  // declare array
  int arr[row][column];

  // take array elements as input
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  // display 2D array using for loop
  printf("The Array elements are:\n");
  for(int i=0; i<row; i++) {
    for(int j=0; j<column; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
