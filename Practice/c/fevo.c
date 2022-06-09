#include <stdio.h>
int main()
{
    int n,i=1,s;
    printf("enter limitb to start");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=i*i;
        printf("%d",s);
    }
    return 0;
}
