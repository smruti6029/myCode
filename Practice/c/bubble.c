#include <stdio.h>
void main()
{
    int a[30],i,n,temp,j,flag;
    printf("enter how many data you have to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data in array");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag=0;

        for(j=0;j<n-i-1;j++)
        {
        if(a[j]>a[j+1])
        {
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }
        if(flag==0)
        break;
        }
    }
    }
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}