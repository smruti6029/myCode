#include<stdio.h>
void swap(char *p,char *ptr)
{
    char c;
    printf("%c %c",*p,*ptr);
    c=*p;
    *p=*ptr;
    *ptr=c;
    printf("%c %c ",*p,*ptr);
}


void main()
{
    char a,b;
    printf("enter a value");
    scanf("%c%c",&a,&b);
    swap(&a,&b);
}