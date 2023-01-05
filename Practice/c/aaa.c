#include <stdio.h>
#include<string.h>
void main()
{
    char arr[30],data;
    int len,c,i;
    printf("enter a string");
    gets(arr);
    len=strlen(arr);
    puts(arr);
    printf("enter a pos to enter a char");
    scanf("%d",&c);
    for(i=0;len>=c;len--)
    {
        arr[len]=arr[len-1];
        i++;
    }
    printf("enterr a data");
    scanf("%s",&data);
    arr[c-1]=data;
    arr[i]="\0";
    printf("%d",len=strlen(arr));
    
}