#include<stdio.h>
struct player
{
    char name[30];
    int avg;

};
struct add
{
    char parents[30];
    char city[30];
    char state[30];
    char country[30];
    int pin;
    struct player var2;
};
void main()
{
    struct add var1[50];
    int i;
    for(i=0;i<2;i++)
    {
        printf("player data");
        scanf("%s %d %s %s %s %s %d",&var1[i].var2.name,&var1[i].var2.avg,&var1[i].parents,&var1[i].city,&var1[i].state,
        &var1[i].country,&var1[i].pin);
    }
    for(i=0;i<2;i++)
    printf("%s %d %s %s %s %s %d",var1[i].var2.name,var1[i].var2.avg,var1[i].parents,var1[i].city,var1[i].state,
        var1[i].country,var1[i].pin);

    

}