#include<stdio.h>
void main()
{
    int n,rem,i,a[10];
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        rem=0;
        rem=n%2;
        a[i]=rem;
        n=n/2;
    }
    while(i>0)
    {
        printf("%d",a[i]);
        i--;
    }
}