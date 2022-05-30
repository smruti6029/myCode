#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter an charecter");
    scanf("%c",&ch);
    if("ch"=="a" || ch =="e" || ch=="i" || ch=="o" || ch=="u" || ch=="A" || ch=="E" || ch=="I" || ch=="O" || ch=="U")
    printf("it is a vowel = ",ch);
    else
    printf("it is not a vowel");
}