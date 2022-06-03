// 1.gote number input kariba tara sqr bahar kariba....
// 1.sqr ra last digit jadi number hua tahle seita automorphoic
// 25
//25^25=625


#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sqr,count=1;
    printf("enter a number");
    scanf("%d",&num);
    sqr=num*num;
    while(num>0)
    {
        if(num%10 != sqr%10)
        {
        count=0;
        break;
        }
    num=num/10;
    sqr=sqr/10;
    
    }
    if (count==1)
    printf("it s a auto... number");
    else
        printf("it is not a auto....");
}