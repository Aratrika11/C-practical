#include<stdio.h>
#include<string.h>
void main()
{
    char st[100];
    printf("Enter a string");
    scanf("%[^\n]",st);
    for(int i=0;i<strlen(st);i++)
    {
        for(int j=i;j<strlen(st);j++)
        {
            printf("%c",st[j]);
        }
        printf("\n");
    }
}