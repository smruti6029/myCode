#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sqr,flag=1;
    printf("enter a number");
    scanf("%d",&num);
    sqr=num*num;
    while(num>0)
    {
        if(num%10 != sqr%10)
        {
        flag=0;
        break;
        }
    num=num/10;
    sqr=sqr/10;
    
    }
    if (flag==1)
    printf("it s a auto... number");
    else
        printf("it is not a auto....");
}