#include<stdio.h>
#include<string.h>
void main()
{
    char str[30];
    int i=1,lenght,flag=1;
    printf("enter a string");
    gets(str);
    lenght=strlen(str);
    while(i<lenght)
    {
        if(str[i]!=str[lenght-i-1])
        {
            flag=0;
        }
    i++;
    }
    if(flag)
    {
        printf("it is a string pallondrome");
    }
    else
    {
        printf("its not a pallendrome");

    }
}
