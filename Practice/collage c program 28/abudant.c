#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,a,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<num;i++)
        {
            if(num%i==0)
            sum+=i;
        }
    if(sum>num)
        
            printf("its abudant number");
    else
        printf("its not a abudant number");
    return 0;
}