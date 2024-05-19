//Subhas Chandra Bose = S.C.Bose
#include<stdio.h>
#include<string.h>
void main()
{
    char name[100];
    printf("Enter a name");
    scanf("%[^\n]",name);
    int i,j,c=0;
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]==' ')
        {
            c++;
            j=i;
        }
    }
    for(i=0;i<j;i++)
    {
        if(i==0)
            printf("%c.",name[i]);
        else if(name[i]==' ')
            printf("%c.",name[i+1]);
    }
    for(i=j+1;i<strlen(name);i++)
        printf("%c",name[i]);
}