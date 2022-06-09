#include <stdio.h>
void main()
{
    int r,c,no,s,i;
    printf("enter a number to start");
    scanf("%d",&no);
    for(r=0;r<no;r++)
    {
        for(s=0;s<(no-1);s++)
        {
            printf(" ");

        }
        i=1;
        for(c=0;c<=r;c++)
        {
            printf("  %d",i);
            i=i*(r-c)/(c+1);
        
        }
        printf("\n");
    
    }
}