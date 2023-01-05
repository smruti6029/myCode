#include<stdio.h>
void main()
{
    int n=4,t=1;
    while(n>1)
    {
        t*=--n;
    }
    printf("%d",t);
}