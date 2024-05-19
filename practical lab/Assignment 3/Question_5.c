#include<stdio.h>
void main()
{
    int x,th=31,t=30,u=28;
    printf("Enter 1 for January , 2 for February , 3 for March , 4 for April , 5 for May , 6 for June , 7 for July , 8 for August , 9 for September , 10 for October, 11 for November, 12 for December ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("Number of days in this month is %d",th);
                break;
        case 2:printf("The number of days in this month is %d",u);
               break;
        case 4:
        case 6:
        case 9:
        case 11:printf("Number of days in this month is %d",t);
                break;
        default:printf("Month non-existent");
    }
}