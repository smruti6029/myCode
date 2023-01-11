#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int num,rev=0,rem;
    printf("enter a number");
    scanf("%d",&num);
    // int s=log10(num);
    // printf("%d",s);
    int dight=log10(num);
    printf("%d",dight);
    int digit =  digit - ((int) log10(num));
    printf("%d",dight);
//     while(num!=0)
//     {
//         rem=num%10;
//         rev=(rev*10)+rem;
//         num=num/10;
//     }
//     printf("%d",rev,dight);
//     while(rev!=0)
//     {
//         switch (rev%10)
//         {
//         case 0:
//         printf("Zero ");
//             break;
//         case 1:
//         printf("one ");
//         break;
//         case 3:
//         printf("two ");
//         case 4:
//         printf("three ");
//         break;
//         case 5:
//         printf("five ");
//         break;
//         case 6:
//         printf("six ");
//         break;
//         case 7:
//         printf("seven ");
//         break;
//         case 8:
//         printf("eight ");
//         break;
//         case 9:
//         printf("nine ");
//         break;
//         default:
//             break;
//         }
//         rev=rev/10;
//     }
//     printf("%d",dight);
// while(dight)
// {
//     printf("zero");
//     dight--;
//     printf("%d",dight);
//     break;
// }

}