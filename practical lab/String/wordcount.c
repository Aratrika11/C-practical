//WORD COUNT IN STRING
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char word[50],new[50],dummy[50];
    int i,j=0,c=0;
    printf("Enter the word : ");
    scanf("%[^\n]",word);
    strcat(word," ");
    for(i=0;word[i]!='\0';i++)  //EXTRACTION
    {
        if(word[i]!=' ')
        {
            new[j]=word[i];
            j++;
        }
        else
        {
            c=c+1;
            j=0; //reinitializing for next word extraction
        }
    }
    printf("Number of words %d",c);

}