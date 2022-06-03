#include<stdio.h>
void main()
{
    char str[20]="DEMONITIZATION";
    char *ptr;
    for(ptr=str;*ptr;ptr++)
    printf("%c  ",ptr+=32);
    printf("bye");
}