#include<stdio.h>
#include<string.h>
void main()
{
    char word[50],new[50];
    int i,j=0,p,q,r=0;
    int c=0,d=0;
    printf("Enter the word : ");
    scanf("%s",word);
    int l=strlen(word);
    for(i=l-1;i>=0;i--)
    {
        if(word[i]!=' ')
        {
            new[j]=word[i];
            j++;
        }
    }
    if(strcmpi(word,new)==0) //cmpi for non case sensitive comparison
        printf("It is Palindrome");
    else
        printf("Not Palindrome");
}

    
