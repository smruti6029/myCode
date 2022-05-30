#include<stdio.h>
#include<conio.h>
void main()
{
     char c;
    printf("enter a charecter");
    scanf("%c",&c);
    if(c>65 || c<90)
    printf("it is a upper case");
    else if (c>97 || c<122)
        printf("its a lower case ");
    else
    printf("it is a special symbol");
}