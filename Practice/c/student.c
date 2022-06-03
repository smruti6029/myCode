#include<stdio.h>
#include<string.h>
void main()
{
    char str[30];
    char ans[]="DENIS RITCHE";
    int i,res;
    for(i=1;i<=3;i++)
    {
        printf("who is the founder of c");
        gets(str);
        res=strcmp(str,ans);
        if(res==0)
        {
            printf("GOOD");
            break;
        }
        else
        printf("TRY AGAIN");
    }
    if(i==4)
    printf(" THE RIGHT ANS is   DENIS RITCHE    ");
}