#include<stdio.h>
void main()
{
    int num,rem,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    if((num<=99999)&&(num>=10000))
    {
        while(num!=0)
        {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        
        }
        printf("%d",sum);
    }
    else{
        printf("another number");
    }

}