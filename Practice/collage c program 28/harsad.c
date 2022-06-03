

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n,i,sum=0,rem;
    printf("enter a number");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;

    }
    if(n%sum==0)
        printf("its hasard num");
    else
        printf("it is not a hasarad number");
}