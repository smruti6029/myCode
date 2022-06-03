// 1.2 ta number input kariba , 2 ta number ra alga alga divisor sum bahar kariba,jadi 
// 1st (num/sum)==(2nd num/sum)   its friendly pair 
// 6=1+2+3=6
// 28=1+2+4+7+14=28




#include<stdio.h>
#include<conio.h>
void main()
{
     int n1,n2,sum1=0,sum2=0,i=1;

     printf("enter two numbers");
     scanf("%d%d",&n1,&n2);
     while(i<n1)
     {
        if(n1%i==0)
        sum1+=i;
        i++;         
     }
     i=1;
    while(i<n2)
     {
        if(n2%i==0)
        sum2+=i;
        i++;
     }
     printf("%d  ",sum1);
     printf("%d   ",sum2);
     if((sum1/n1)==(sum2/n2))
     {
    printf("its a friendly pair");
     }
    else
    printf("its not a friendly pair");

}