#include<stdio.h>
extern int a;
void fun()
{
    printf("%d,a");
    a++;
}
void main()
{
    a++;
    fun();
    printf("%d",a);
}
