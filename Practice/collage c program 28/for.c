#include<stdio.h>
#include<conio.h>
void main()
{
     int n1,n2,sum1=0,sum2=0,i;

     printf("enter two numbers");
     scanf("%d%d",&n1,&n2);
     for(i=1;i<n1;i++)
     {
         if(n1%i==0)
         sum1+=i;
     }
     for(i=1;i<n2;i++)
     {
         if(n2%i==0)
         sum2+=i;
     }

    printf("%d %d ",sum1,sum2);
    if((sum1/n1)==(n2/sum2))
    printf("it is friendly pair");
    else
    printf("it is not friendly pair");
}