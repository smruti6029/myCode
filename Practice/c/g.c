#include<stdio.h>
void main()
{
    int i=2,j;
    {
        int i=4,j=5;
        printf("%d %d",i,j);
    }
    printf("%d %d",i,j);
}