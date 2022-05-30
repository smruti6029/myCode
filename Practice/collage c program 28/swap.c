#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    printf("%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
printf("%d %d",a,b);
}