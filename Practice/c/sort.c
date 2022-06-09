#include <stdio.h>
void main()
{
    int a[30],i,n,temp,j;
    printf("enter how many data you have to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data in array");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
        if(a[j]>a[j+1])
        {
        {
            temp=a[j];
            a[j]=a[j+i];
            a[j+1]=temp;
        }
        }
    }
    }
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}