#include<stdio.h>
int main(){
    float prize[4];

    printf("Enter three prize\n");
    scanf("%f\n",&prize[0]);
    scanf("%f\n",&prize[1]);
    scanf("%f\n",&prize[2]);

    printf("Total prize 1 = %f\n",prize[0]);
    printf("Total prize 2 = %f\n",prize[1]);
    printf("Total prize 3 = %f\n",prize[2]);

    printf("\n");

    printf("Total prize 1 with gst = %f\n",prize[0] +(0.18)*prize[0]);
     printf("Total prize 2 with gst = %f\n",prize[1] +(0.18)*prize[1]);
      printf("Total prize 3 with Gst = %f\n",prize[2] +(0.18)*prize[2]);

      return 0;


}