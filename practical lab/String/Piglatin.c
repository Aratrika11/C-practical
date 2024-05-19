#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isVowel(char []);
void main()
{
    char word[50],new[50],dummy[50];
    int i,j=0,p,q,r=0;
    int c=0,d=0;
    printf("Enter the word : ");
    scanf("%s",word);
    strcpy(dummy,word);
    
    if(isVowel(word)==0) //checking for presence of vowels
    printf("Piglatin not possible");

    else if((word[0]=='a')||(word[0]=='A')||(word[0]=='e')||(word[0]=='E')||(word[0]=='i')||(word[0]=='I')||(word[0]=='o')||(word[0]=='O')||(word[0]=='u')||(word[0]=='U'))
    {
        for(i=0;word[i]!='\0';i++)
            c++;
        word[c]='h';word[c+1]='a';word[c+2]='y';
        printf("Pig Latin word : ");
        for(i=0;i<c+3;i++)
            printf("%c",word[i]);
    }
    
    else
    {
        for(i=0;word[i]!='\0';i++)
            c++;
        for(i=1;i<c;i++)
        {
            if((word[i]=='a')||(word[i]=='A')||(word[i]=='e')||(word[i]=='E')||(word[i]=='i')||(word[i]=='I')||(word[i]=='o')||(word[i]=='O')||(word[i]=='u')||(word[i]=='U'))
            {
                p=i;
                q=i;
                while(word[q]!='\0')
                {
                    new[j]=word[q];
                    q++;j++;
                }
                break;
            }
        }
       
        for(j=0;new[j]!='\0';j++) //checking length of word from vowel
            d++;

        for(i=0;i<p;)
        {
            for(j=d;j<c;)    //adding the remaining from before vowel
            {
                new[j]=dummy[i];
                j++;i++;
            }
        }

        new[c]='a';new[c+1]='y';

        printf("Pig Latin word : ");
        for(j=0;j<c+2;j++)
            printf("%c",new[j]);
    }

    
}
int isVowel(char word[])
{
    int r=0;
    for(int i=0;i<strlen(word);i++)
    {
        if((word[i]=='a')||(word[i]=='A')||(word[i]=='e')||(word[i]=='E')||(word[i]=='i')||(word[i]=='I')||(word[i]=='o')||(word[i]=='O')||(word[i]=='u')||(word[i]=='U'))
        {
            r=r+1;
            break;
        }
    }
    if(r==0)
        return 0;
        else
        return 1;
}
        