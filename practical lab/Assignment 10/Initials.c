//6. Input a name and find its initial (e.g., Subhash Chandra Bose should be printed as S.C. B)
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void change(char*);
void main()
{
    char string[50];
    printf("Enter a Name: ");
    scanf("%[^\n]",string);
    printf("%s \n",string);
    change(string);
}
void change(char *ptr)
{
    /*int l;
    char *ptr=str;
    l=strlen(str);*/
    
    //when passing pointer
    for(int i=0;ptr[i]!='\0';i++)
    {
        if(i==0)
            printf("%c.",toupper(ptr[i]));
        else if(ptr[i]==' ')
            printf("%c.",toupper(ptr[i+1]));
    }
}