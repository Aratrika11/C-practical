#include<stdio.h>
void main()
{
    char name[10][20];
    int n,i;
    printf("enter number of names");
    scanf("%d",&n);
    printf("Enter names");
    for(i=0;i<n;i++)
        scanf("%s",&name[i][0]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%s \n",name[i]);
}