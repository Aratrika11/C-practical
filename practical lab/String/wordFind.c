#include<stdio.h>
#include<string.h>
void main()
{
    char word[50],new[50],s[50];
    int i,j=0,c=0;
    printf("Enter the word : ");
    scanf("%[^\n]",word);
    printf("Enter word to be found");
    scanf("%s",s);
    strcat(word," ");
    for(i=0;word[i]!='\0';i++)
    {
        if(word[i]!=' ')
        {
            new[j]=word[i];
            j++;
        }
        else
        {
            j=0;
            if(strcmp(new,s)==0)
                break;
        }
    }
    printf("%s found",new);
}
            