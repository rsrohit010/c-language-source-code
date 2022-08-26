#include <stdio.h>
int main()
{
    char month;

    printf("Enter a month : \n");
    scanf("%s",&month);

    switch (month)
    {
    case 'j' : printf("it's a january\n");
               break;
    case 'f' : printf("it's a february\n");
               break;    
    case 'm' : printf("it's a march\n");
               break;
    case 'a' : printf("it's a april\n");
               break;    
    case 'n' : printf("it's a june\n");
               break;
    case 'l' : printf("it's a july\n");
               break;    
    case 't' : printf("it's a august\n");
               break;
    default : printf("it's not a valid month\n");
               break;
    }
}