#include<stdio.h>
void main()
{
    int arr[30],i,j,n,count,vist[5];
    printf("enter how many number in array");
    scanf("%d",&n);
    printf("enetr element in array");
    for(i=0;i<n;i++)
    {
     
        scanf("%d",&arr[i]);
        vist[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(vist[i]==1)
        {
            continue;
        }
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                vist[j]=1;
            }

        }
        
        printf("%d found  %d times in array \n",arr[i],count);
    }

}