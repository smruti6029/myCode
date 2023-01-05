#include<stdio.h>
void fevo(int n)
{
    static int n1=0,n2=1;
    int n3;
    if(n>0)
    {
        n3=n1+n2;
        printf("   %d",n3);                                  
        n1=n2;
        n2=n3;
        fevo(n-1);
    }
}

void main()
{
    int n;
    printf("enter a range");
    printf("0,1");
    scanf("%d",&n);
    fevo(n);
}