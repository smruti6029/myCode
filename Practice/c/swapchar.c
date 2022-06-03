#include<stdio.h>
void swap(char a,char b)
{
    char c;
    printf("%c %c",a,b);
    c=a;
    a=b;
    b=c;
    printf("%c %c ",a,b);
}


void main()
{
    char a,b;
    printf("enter a value");
    scanf("%c%c",&a,&b);
    swap(a,b);
}