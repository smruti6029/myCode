#include<stdio.h>
#include<conio.h>
void main()
{

    char c;
    printf("enter a charecter");
    scanf("%c",&c);
    if(c>"a" && c<"z" || c>"A" && c<"Z")
    printf("it is a alphabet");
    else
    printf("it is not a alphabet");
}