#include<stdio.h>
void fun()
{
    static int a=1;
    printf("%d",a);
    a++;
}

void main()
{
    fun();
    fun();
    fun();
}