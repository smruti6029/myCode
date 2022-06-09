#include<stdio.h>
void main()
{
void po();
int arr[3][3],i,j;
printf("3x3 martix enter data");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);

    }
}
po(&arr,3,3);

}
void po(int *p,int n ,int m)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        printf("%d",*p);
        p++;
    }
    printf("\n");
}


}




