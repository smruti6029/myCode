#include<stdio.h>
#include<string.h>
void main()
{
    int a[10],n,i;
    printf("enter how many data in array");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for( i=0;i<n;i++)
       b[i]=a[i];
    for( i=0;i<n;i++)
        printf(" the copy of secound array = %d\n",b[i]);
}