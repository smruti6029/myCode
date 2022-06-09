#include <stdio.h>
void main()
{
    int arr[3][3],i,j,x,temp=0;
    printf("enter  data in array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(x=0;x<3;x++)
    {
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            if(arr[i][x]>arr[i][x])
            {
            temp=arr[i][x];
            arr[i][x]=arr[i][x];
            arr[i][x]=temp;
            }
        }
    }
    }
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        {
            scanf("%d",arr[i][j]);

        }
        printf("\n");
}
    
}

