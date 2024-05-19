//4. Input a sentence and find the number of words starting with ‘S’.
#include<stdio.h>
#include<string.h>
void search(char[]);
void main()
{
    char string[50];
    printf("Enter a sentence");
    scanf("%[^\n]",string);
    printf("%s \n",string);
    search(string);
}
void search(char str[])
{
    int l,c=0;
    //char *ptr=str;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(i==0)
        {
            if(str[i]=='S'||str[i]=='s')
                c=c+1;
        }
        else if(str[i]==' ')
        {
            if(str[i+1]=='S'|| str[i+1]=='s')
                c=c+1;
        }
    }
    printf("No. of words starting with S are: %d",c);
}