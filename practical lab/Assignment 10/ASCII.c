//5. Input a string and find sum of the ASCII values of all characters
#include<stdio.h>
#include<string.h>
void main()
{
    char string[40];
    printf("Enter a string ");
    scanf("%s",string);
    printf("%s \n",string);
    int l=strlen(string);
    for(int i=0;i<l;i++)
    {
        printf("ASCII of %c is: %d \n",string[i],string[i]);
    }
}